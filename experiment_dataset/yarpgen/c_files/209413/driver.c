#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14821;
signed char var_3 = (signed char)-49;
long long int var_4 = 6779424361239629LL;
unsigned long long int var_5 = 843621982409516247ULL;
unsigned char var_6 = (unsigned char)71;
long long int var_7 = 2430552010626723530LL;
unsigned long long int var_8 = 5623072336616528553ULL;
unsigned short var_9 = (unsigned short)51536;
unsigned short var_10 = (unsigned short)19479;
unsigned char var_12 = (unsigned char)104;
int zero = 0;
signed char var_13 = (signed char)-123;
signed char var_14 = (signed char)124;
short var_15 = (short)-10550;
void init() {
}

void checksum() {
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
