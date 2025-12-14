#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 705170874;
signed char var_3 = (signed char)6;
short var_6 = (short)8813;
long long int var_11 = 3189578561400656855LL;
int zero = 0;
short var_13 = (short)-3444;
_Bool var_14 = (_Bool)0;
short var_15 = (short)9667;
void init() {
}

void checksum() {
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
