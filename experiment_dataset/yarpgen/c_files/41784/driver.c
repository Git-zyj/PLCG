#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 7419257858654682795ULL;
int var_4 = -1658183189;
short var_6 = (short)-12862;
int var_7 = 1774486303;
unsigned long long int var_9 = 12158685975862210035ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)26992;
long long int var_12 = 6077874422233140558LL;
unsigned long long int var_13 = 6493147572643683162ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
