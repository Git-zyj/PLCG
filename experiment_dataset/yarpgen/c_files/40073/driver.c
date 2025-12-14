#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1669559360529210203ULL;
unsigned char var_4 = (unsigned char)71;
short var_6 = (short)-3873;
unsigned char var_7 = (unsigned char)197;
unsigned short var_10 = (unsigned short)4028;
int zero = 0;
unsigned char var_12 = (unsigned char)169;
int var_13 = -524081920;
int var_14 = 907941021;
unsigned short var_15 = (unsigned short)32914;
unsigned long long int var_16 = 17901924624982890156ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
