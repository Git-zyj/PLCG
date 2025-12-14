#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 35101288U;
short var_6 = (short)-11546;
unsigned short var_10 = (unsigned short)9291;
unsigned long long int var_14 = 17975744457194952214ULL;
int var_16 = -125148627;
int zero = 0;
int var_17 = -226458170;
short var_18 = (short)19200;
short var_19 = (short)2474;
signed char var_20 = (signed char)77;
signed char var_21 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
