#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5817593752934580822ULL;
long long int var_2 = 2927142207046856461LL;
int var_3 = -99204222;
signed char var_4 = (signed char)-28;
long long int var_9 = 5404065038285706818LL;
int zero = 0;
signed char var_10 = (signed char)51;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
