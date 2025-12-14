#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)4;
short var_3 = (short)-19547;
long long int var_6 = -6401991874148869283LL;
unsigned int var_10 = 2717292015U;
int var_12 = -769196021;
short var_14 = (short)32015;
short var_16 = (short)16996;
int zero = 0;
unsigned long long int var_18 = 8448202950332000783ULL;
short var_19 = (short)-17441;
void init() {
}

void checksum() {
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
