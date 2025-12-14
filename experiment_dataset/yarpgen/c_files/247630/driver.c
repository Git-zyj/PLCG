#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18342788585099077589ULL;
long long int var_4 = -4775974163698327689LL;
int var_7 = 304828858;
long long int var_11 = 1862977904785060652LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_17 = -7518125740042722934LL;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 4226975069U;
long long int var_20 = -1177569178996113044LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
