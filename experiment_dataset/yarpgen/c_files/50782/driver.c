#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -836279527;
long long int var_4 = -689751062742861454LL;
long long int var_7 = -1259857908015700517LL;
long long int var_13 = 6538893151746629593LL;
unsigned long long int var_15 = 4351002830575760370ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 8180712073986309318LL;
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
