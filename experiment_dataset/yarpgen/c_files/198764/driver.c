#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7478487126609049875LL;
unsigned short var_1 = (unsigned short)12639;
unsigned char var_5 = (unsigned char)107;
unsigned short var_6 = (unsigned short)26613;
int zero = 0;
int var_15 = -1985046990;
long long int var_16 = 7269667048894577901LL;
int var_17 = 316022276;
signed char var_18 = (signed char)92;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
