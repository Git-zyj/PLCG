#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12119850491845372114ULL;
long long int var_8 = 4218977026080929492LL;
unsigned char var_12 = (unsigned char)186;
int zero = 0;
unsigned char var_17 = (unsigned char)70;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)118;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
