#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2986680904105800956LL;
int var_2 = -757565359;
_Bool var_8 = (_Bool)1;
int var_16 = 1117538076;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3646886599U;
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
