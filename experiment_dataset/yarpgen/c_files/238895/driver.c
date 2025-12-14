#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8925197738925567167LL;
short var_4 = (short)-18063;
_Bool var_5 = (_Bool)0;
int var_7 = -1880913771;
int var_8 = -74574658;
int zero = 0;
long long int var_12 = -8481971314463614176LL;
signed char var_13 = (signed char)-31;
void init() {
}

void checksum() {
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
