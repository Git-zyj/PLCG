#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 463515154603774627ULL;
signed char var_3 = (signed char)-31;
signed char var_7 = (signed char)34;
int var_8 = -443134278;
unsigned int var_12 = 992270925U;
int zero = 0;
unsigned long long int var_13 = 968322020180887161ULL;
short var_14 = (short)9639;
short var_15 = (short)30641;
unsigned long long int var_16 = 8458764068936801375ULL;
void init() {
}

void checksum() {
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
