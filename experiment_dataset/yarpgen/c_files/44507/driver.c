#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)58549;
unsigned long long int var_5 = 7523736236035378256ULL;
unsigned long long int var_6 = 3662364370598034993ULL;
unsigned long long int var_7 = 17115449279956250252ULL;
signed char var_14 = (signed char)-99;
int zero = 0;
unsigned char var_17 = (unsigned char)33;
unsigned long long int var_18 = 14115191533731304467ULL;
int var_19 = 1473383275;
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
