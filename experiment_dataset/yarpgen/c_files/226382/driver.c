#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 845833150198413522ULL;
unsigned long long int var_4 = 8282242898823534702ULL;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)29;
int var_7 = -867102344;
long long int var_8 = 350783631136000458LL;
long long int var_17 = 5434305704188595223LL;
int zero = 0;
unsigned int var_19 = 971699587U;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
int var_22 = -229882667;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
