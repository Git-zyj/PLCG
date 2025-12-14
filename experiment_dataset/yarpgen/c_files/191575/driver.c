#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -585831390;
_Bool var_3 = (_Bool)0;
int var_5 = 627280104;
signed char var_8 = (signed char)-108;
unsigned short var_12 = (unsigned short)64405;
int zero = 0;
unsigned long long int var_14 = 17666074371804553146ULL;
long long int var_15 = 2084155708969243644LL;
unsigned long long int var_16 = 10292962501798422566ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
