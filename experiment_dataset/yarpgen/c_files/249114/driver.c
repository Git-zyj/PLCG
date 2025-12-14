#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 2200370248071736129LL;
unsigned long long int var_3 = 12465290516002645046ULL;
signed char var_4 = (signed char)96;
unsigned short var_5 = (unsigned short)41544;
signed char var_9 = (signed char)33;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)4735;
int var_12 = -1491683690;
signed char var_13 = (signed char)100;
int var_14 = -1747401922;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
