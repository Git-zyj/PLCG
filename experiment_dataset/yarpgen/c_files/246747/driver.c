#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1296856096;
signed char var_2 = (signed char)-104;
unsigned int var_3 = 92121720U;
short var_5 = (short)20797;
unsigned int var_11 = 2767264153U;
long long int var_12 = -7215423348090961309LL;
int zero = 0;
unsigned int var_13 = 4112566765U;
unsigned int var_14 = 1866465212U;
unsigned short var_15 = (unsigned short)9976;
unsigned long long int var_16 = 13752290236008540072ULL;
int var_17 = 1144374197;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
