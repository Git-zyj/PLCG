#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19127;
int var_3 = 1827889336;
int var_5 = 1245207982;
int var_7 = 1401663285;
_Bool var_9 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int var_14 = 2043483888;
_Bool var_17 = (_Bool)0;
int var_18 = 1956003813;
int zero = 0;
int var_20 = 1028675060;
_Bool var_21 = (_Bool)0;
int var_22 = 1710068477;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
