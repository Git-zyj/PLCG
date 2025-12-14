#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 303893423U;
unsigned char var_1 = (unsigned char)162;
int var_2 = 1281446720;
unsigned short var_10 = (unsigned short)31230;
int var_17 = 102319542;
int zero = 0;
unsigned short var_19 = (unsigned short)37864;
unsigned short var_20 = (unsigned short)58440;
int var_21 = 75614423;
unsigned char var_22 = (unsigned char)165;
unsigned long long int var_23 = 7464714187729614563ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
