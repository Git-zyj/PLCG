#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27625;
short var_6 = (short)3217;
unsigned char var_9 = (unsigned char)0;
unsigned int var_10 = 322290523U;
int zero = 0;
unsigned short var_15 = (unsigned short)59501;
unsigned int var_16 = 3059166348U;
unsigned short var_17 = (unsigned short)51573;
int var_18 = -1228214303;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
