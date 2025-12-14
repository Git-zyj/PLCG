#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6920034759755900068ULL;
short var_6 = (short)31885;
unsigned long long int var_7 = 18259895244948390323ULL;
int var_13 = 160554139;
int zero = 0;
unsigned short var_14 = (unsigned short)33749;
unsigned short var_15 = (unsigned short)43665;
signed char var_16 = (signed char)-118;
short var_17 = (short)9645;
void init() {
}

void checksum() {
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
