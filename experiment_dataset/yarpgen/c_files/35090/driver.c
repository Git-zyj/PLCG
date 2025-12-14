#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52189;
signed char var_6 = (signed char)85;
int var_7 = -776484748;
short var_14 = (short)9689;
unsigned char var_16 = (unsigned char)237;
int zero = 0;
unsigned long long int var_17 = 2289938011075034473ULL;
unsigned long long int var_18 = 6713516403103829101ULL;
void init() {
}

void checksum() {
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
