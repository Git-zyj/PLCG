#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3833324315579654241LL;
long long int var_2 = 8901733466000805687LL;
int var_7 = -54988952;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-14259;
int zero = 0;
int var_12 = -1964372794;
short var_13 = (short)19854;
int var_14 = -1294723279;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
