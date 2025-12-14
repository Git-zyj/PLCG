#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13517;
unsigned short var_3 = (unsigned short)42492;
unsigned char var_4 = (unsigned char)202;
unsigned long long int var_7 = 14597113795245334288ULL;
short var_8 = (short)-28117;
unsigned short var_10 = (unsigned short)3739;
short var_11 = (short)22898;
unsigned short var_14 = (unsigned short)58892;
int zero = 0;
unsigned long long int var_15 = 3069458871878989505ULL;
int var_16 = -1804845980;
unsigned int var_17 = 380746992U;
int var_18 = 1588618601;
unsigned long long int var_19 = 17730270173667850857ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
