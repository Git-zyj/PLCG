#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2696449461121010086LL;
int var_7 = 622048533;
int zero = 0;
unsigned long long int var_12 = 3248072220999553670ULL;
unsigned short var_13 = (unsigned short)44374;
unsigned long long int var_14 = 9839152057666255580ULL;
signed char var_15 = (signed char)-102;
unsigned short var_16 = (unsigned short)32825;
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
