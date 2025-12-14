#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 652668373;
int var_3 = 734421184;
unsigned int var_5 = 452117588U;
unsigned int var_6 = 1581366807U;
signed char var_7 = (signed char)-66;
unsigned long long int var_8 = 5276232696810025069ULL;
unsigned long long int var_9 = 5558456329794072280ULL;
int zero = 0;
short var_11 = (short)32266;
unsigned long long int var_12 = 1030185699953922658ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
