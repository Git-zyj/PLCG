#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 618799094U;
long long int var_4 = 5628532390305171590LL;
unsigned short var_6 = (unsigned short)6903;
unsigned short var_7 = (unsigned short)47999;
unsigned long long int var_8 = 6106859162314618495ULL;
unsigned long long int var_9 = 15465847144691209622ULL;
int zero = 0;
signed char var_10 = (signed char)67;
unsigned long long int var_11 = 17937407692539242062ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
