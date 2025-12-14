#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1684266911;
long long int var_4 = -1749239500198950163LL;
unsigned int var_5 = 3612768307U;
signed char var_7 = (signed char)-110;
int var_10 = 1138609011;
int zero = 0;
signed char var_13 = (signed char)10;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
