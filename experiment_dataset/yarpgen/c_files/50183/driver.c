#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)235;
unsigned int var_3 = 2062632529U;
_Bool var_6 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 17800929368243502988ULL;
unsigned long long int var_18 = 2569260170125194233ULL;
unsigned long long int var_19 = 10350754796181787793ULL;
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
