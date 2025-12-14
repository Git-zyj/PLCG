#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1954300183;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)0;
short var_8 = (short)-18947;
long long int var_12 = 8823796436503448727LL;
unsigned int var_13 = 131577526U;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -493160027724600658LL;
unsigned long long int var_17 = 10176590046652463816ULL;
void init() {
}

void checksum() {
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
