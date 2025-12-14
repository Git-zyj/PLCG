#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42855;
short var_1 = (short)2595;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-106;
int var_6 = 43441034;
signed char var_9 = (signed char)-12;
unsigned int var_10 = 3738944694U;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 1514991593839241879ULL;
short var_13 = (short)28098;
unsigned int var_14 = 912980910U;
int zero = 0;
unsigned char var_15 = (unsigned char)86;
signed char var_16 = (signed char)22;
unsigned short var_17 = (unsigned short)13880;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
