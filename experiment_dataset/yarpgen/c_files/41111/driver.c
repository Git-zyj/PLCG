#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)0;
short var_2 = (short)32378;
unsigned int var_3 = 440025838U;
long long int var_4 = -4098205672648249747LL;
unsigned int var_7 = 720188631U;
unsigned char var_8 = (unsigned char)226;
int zero = 0;
unsigned short var_10 = (unsigned short)21660;
long long int var_11 = 2921685322740649166LL;
long long int var_12 = 7151511606649820477LL;
unsigned int var_13 = 570736470U;
long long int var_14 = 7620007411087756734LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
