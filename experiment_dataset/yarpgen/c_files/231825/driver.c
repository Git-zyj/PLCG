#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10631116889850256869ULL;
unsigned long long int var_1 = 9943392508181220641ULL;
unsigned long long int var_3 = 5007470296227871786ULL;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 14623449734009528703ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
