#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5697145601703904296LL;
unsigned int var_2 = 3517438808U;
unsigned char var_3 = (unsigned char)204;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)172;
_Bool var_10 = (_Bool)0;
long long int var_13 = -8277228810490235560LL;
long long int var_14 = 5524777508615837627LL;
int zero = 0;
long long int var_15 = -5386387494950594045LL;
unsigned long long int var_16 = 9691789923815722991ULL;
unsigned char var_17 = (unsigned char)101;
unsigned int var_18 = 38905704U;
unsigned int var_19 = 1475294689U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
