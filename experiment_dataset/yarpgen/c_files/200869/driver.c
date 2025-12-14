#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_13 = 15906295442539979434ULL;
unsigned long long int var_15 = 3123625953419891593ULL;
long long int var_16 = -210758681175138326LL;
int zero = 0;
unsigned int var_17 = 3662988233U;
short var_18 = (short)18486;
long long int var_19 = 356943596467532691LL;
short var_20 = (short)15164;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
