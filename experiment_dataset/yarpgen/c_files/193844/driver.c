#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 761014482U;
unsigned short var_2 = (unsigned short)20698;
unsigned long long int var_10 = 6540620052609254567ULL;
unsigned int var_15 = 4178344912U;
unsigned long long int var_17 = 14029833329195636981ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3246149779U;
unsigned int var_21 = 810552137U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
