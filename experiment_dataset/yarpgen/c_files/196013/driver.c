#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4816;
short var_2 = (short)-7118;
long long int var_3 = -3209503914012350824LL;
long long int var_9 = 8022826656310601827LL;
int var_10 = 1001908139;
int zero = 0;
unsigned int var_13 = 1454592942U;
unsigned long long int var_14 = 13605192509928818421ULL;
unsigned int var_15 = 4260633860U;
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
