#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11054898462376379863ULL;
long long int var_3 = -5765268402049157484LL;
_Bool var_5 = (_Bool)1;
long long int var_7 = 5507139239810791313LL;
int var_10 = -1181709326;
int var_11 = 882578193;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3971481019U;
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
