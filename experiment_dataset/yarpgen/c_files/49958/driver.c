#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8379440402729143677LL;
long long int var_5 = -7904850035892319026LL;
unsigned int var_7 = 4032002082U;
short var_13 = (short)-11180;
int zero = 0;
signed char var_15 = (signed char)123;
long long int var_16 = -1045880592954327732LL;
unsigned long long int var_17 = 17881805174778573973ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
