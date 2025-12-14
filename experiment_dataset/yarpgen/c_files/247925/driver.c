#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4012828654063809427ULL;
unsigned int var_4 = 1998305815U;
_Bool var_6 = (_Bool)0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -4847441053929316173LL;
signed char var_14 = (signed char)116;
int var_16 = 1912395134;
int zero = 0;
int var_17 = 1726322722;
long long int var_18 = 4090304005273773990LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
