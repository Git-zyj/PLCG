#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1624032616;
unsigned char var_9 = (unsigned char)60;
unsigned long long int var_11 = 6624546877260635898ULL;
int zero = 0;
short var_19 = (short)24572;
signed char var_20 = (signed char)-97;
unsigned char var_21 = (unsigned char)53;
unsigned int var_22 = 1785765357U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
