#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1509436505U;
signed char var_3 = (signed char)4;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 15718313616894543731ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-28074;
unsigned int var_14 = 3156264665U;
int var_15 = -1843407895;
unsigned int var_16 = 993002047U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
