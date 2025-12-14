#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41964;
long long int var_7 = 4671373770917873007LL;
int var_8 = -1523260427;
unsigned int var_12 = 4252368073U;
int zero = 0;
signed char var_18 = (signed char)117;
signed char var_19 = (signed char)9;
short var_20 = (short)-25442;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
