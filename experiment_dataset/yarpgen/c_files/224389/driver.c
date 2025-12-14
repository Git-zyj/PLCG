#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6162683248234730202ULL;
unsigned int var_2 = 64653122U;
signed char var_3 = (signed char)113;
unsigned char var_4 = (unsigned char)178;
unsigned int var_5 = 2168328884U;
int var_6 = -1237194480;
unsigned long long int var_7 = 14570932131496835232ULL;
long long int var_9 = 5833593975048329129LL;
unsigned long long int var_14 = 14277630218368871112ULL;
unsigned long long int var_15 = 14434334323571887086ULL;
unsigned int var_16 = 3874879240U;
unsigned char var_17 = (unsigned char)102;
int zero = 0;
short var_19 = (short)-12383;
unsigned char var_20 = (unsigned char)252;
unsigned char var_21 = (unsigned char)53;
unsigned short var_22 = (unsigned short)52358;
int var_23 = 1413289312;
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
