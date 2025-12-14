#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)14149;
unsigned short var_7 = (unsigned short)6423;
unsigned short var_16 = (unsigned short)19142;
int var_17 = -112470416;
unsigned short var_18 = (unsigned short)17714;
int zero = 0;
unsigned short var_19 = (unsigned short)3284;
unsigned short var_20 = (unsigned short)15864;
unsigned long long int var_21 = 187347737752413151ULL;
unsigned short var_22 = (unsigned short)7719;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
