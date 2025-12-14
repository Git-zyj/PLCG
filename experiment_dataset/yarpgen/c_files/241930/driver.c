#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9716508129855711263ULL;
unsigned short var_3 = (unsigned short)43201;
unsigned short var_8 = (unsigned short)63991;
signed char var_14 = (signed char)-2;
int zero = 0;
unsigned short var_16 = (unsigned short)57185;
long long int var_17 = 8301205331545326717LL;
long long int var_18 = -6041065495571749307LL;
signed char var_19 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
