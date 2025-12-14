#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1289963202;
long long int var_1 = -3023808393431881617LL;
short var_2 = (short)24636;
unsigned int var_5 = 3402632455U;
unsigned short var_8 = (unsigned short)16219;
unsigned int var_9 = 3247943496U;
long long int var_16 = 6894042956911638367LL;
int zero = 0;
signed char var_18 = (signed char)-52;
unsigned long long int var_19 = 10464491799136468479ULL;
long long int var_20 = -26132863428490036LL;
int var_21 = 1403448558;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
