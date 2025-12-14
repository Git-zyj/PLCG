#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4401349023614569153ULL;
unsigned int var_5 = 1015521534U;
int var_6 = 611686640;
unsigned short var_9 = (unsigned short)53325;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 4115355423372594750ULL;
long long int var_15 = 1552689513609567372LL;
_Bool var_16 = (_Bool)0;
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
