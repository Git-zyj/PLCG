#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_5 = (signed char)95;
_Bool var_7 = (_Bool)0;
long long int var_9 = 1516819764147549551LL;
signed char var_14 = (signed char)-67;
unsigned int var_15 = 1240359098U;
long long int var_17 = -5370740973019504910LL;
int zero = 0;
signed char var_18 = (signed char)-69;
_Bool var_19 = (_Bool)1;
int var_20 = -1285214225;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
