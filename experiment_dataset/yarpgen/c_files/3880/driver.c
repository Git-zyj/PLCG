#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8257;
short var_2 = (short)14949;
unsigned short var_12 = (unsigned short)59434;
long long int var_13 = -2637541240912995504LL;
int zero = 0;
long long int var_19 = 3198321611083183930LL;
long long int var_20 = 818744111773197809LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
