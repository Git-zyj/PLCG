#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53963;
unsigned int var_5 = 3346997093U;
unsigned int var_9 = 399067075U;
unsigned short var_10 = (unsigned short)36447;
short var_11 = (short)31270;
unsigned int var_13 = 2435997164U;
unsigned char var_17 = (unsigned char)82;
int zero = 0;
long long int var_18 = -2226176366764649733LL;
unsigned char var_19 = (unsigned char)186;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
