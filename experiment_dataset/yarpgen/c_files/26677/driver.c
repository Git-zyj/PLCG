#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)2;
int var_2 = 609955914;
unsigned short var_3 = (unsigned short)19719;
unsigned short var_4 = (unsigned short)51457;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-109;
int zero = 0;
short var_17 = (short)-23844;
unsigned int var_18 = 1884430724U;
unsigned char var_19 = (unsigned char)168;
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
