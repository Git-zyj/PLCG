#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_5 = 7913058867521526168LL;
long long int var_9 = -861726277915058747LL;
short var_14 = (short)-19838;
int zero = 0;
unsigned long long int var_20 = 15358435526801072806ULL;
unsigned long long int var_21 = 18243225966934801048ULL;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 4190183117U;
unsigned long long int var_24 = 12458693565494556009ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
