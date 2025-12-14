#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8466537345162537556LL;
short var_3 = (short)-10622;
unsigned char var_5 = (unsigned char)185;
unsigned int var_7 = 4016445673U;
long long int var_8 = 6793297914420907313LL;
signed char var_10 = (signed char)-37;
short var_13 = (short)22789;
int zero = 0;
unsigned char var_17 = (unsigned char)143;
unsigned char var_18 = (unsigned char)2;
short var_19 = (short)24367;
void init() {
}

void checksum() {
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
