#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)41;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)40;
_Bool var_14 = (_Bool)1;
long long int var_15 = -8989539545120420104LL;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
