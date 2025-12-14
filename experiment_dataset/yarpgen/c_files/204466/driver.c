#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7434035773022002291ULL;
int var_6 = 919212698;
short var_7 = (short)20618;
unsigned short var_11 = (unsigned short)3131;
int zero = 0;
long long int var_13 = -2039572969947383816LL;
unsigned int var_14 = 4238651643U;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
