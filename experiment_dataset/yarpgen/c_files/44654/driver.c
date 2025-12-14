#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)60623;
signed char var_5 = (signed char)110;
unsigned int var_6 = 1802359297U;
signed char var_10 = (signed char)-39;
int var_13 = -1335150515;
int zero = 0;
unsigned char var_16 = (unsigned char)143;
signed char var_17 = (signed char)-45;
short var_18 = (short)-16318;
void init() {
}

void checksum() {
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
