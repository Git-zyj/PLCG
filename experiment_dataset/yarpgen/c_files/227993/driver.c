#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1909646764171254264LL;
unsigned int var_2 = 2022823035U;
unsigned int var_9 = 1778723839U;
long long int var_10 = 455565347228980936LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-109;
void init() {
}

void checksum() {
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
