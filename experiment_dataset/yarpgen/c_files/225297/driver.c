#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2662551722U;
unsigned short var_2 = (unsigned short)10872;
unsigned int var_3 = 528749805U;
int var_4 = -1582095901;
signed char var_5 = (signed char)-110;
unsigned char var_7 = (unsigned char)106;
signed char var_8 = (signed char)42;
int var_9 = -224484978;
int zero = 0;
unsigned short var_12 = (unsigned short)9124;
int var_13 = 1262193894;
unsigned char var_14 = (unsigned char)101;
unsigned short var_15 = (unsigned short)22548;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
