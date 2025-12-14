#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1079186055U;
unsigned int var_17 = 3512737106U;
unsigned long long int var_18 = 11994092410599423379ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)5581;
long long int var_20 = -5551793347628565301LL;
void init() {
}

void checksum() {
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
