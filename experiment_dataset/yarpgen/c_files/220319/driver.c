#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5744216498103778010LL;
long long int var_1 = 4964438054280841534LL;
long long int var_3 = 3320603724200337792LL;
long long int var_4 = -6428236347166131474LL;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
long long int var_9 = -2784485247119556983LL;
long long int var_11 = -2435420986099795986LL;
int zero = 0;
signed char var_12 = (signed char)-101;
long long int var_13 = -3305114702711511963LL;
signed char var_14 = (signed char)-127;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
