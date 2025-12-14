#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)433;
unsigned char var_4 = (unsigned char)88;
unsigned long long int var_8 = 628576115588534435ULL;
unsigned int var_9 = 1803940120U;
short var_16 = (short)26583;
signed char var_17 = (signed char)-70;
int zero = 0;
unsigned short var_18 = (unsigned short)31232;
int var_19 = -1532876127;
short var_20 = (short)1771;
unsigned char var_21 = (unsigned char)69;
void init() {
}

void checksum() {
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
