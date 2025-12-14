#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7233390848110093910ULL;
short var_8 = (short)2615;
unsigned int var_10 = 185821307U;
long long int var_17 = -6733484402238168092LL;
int zero = 0;
unsigned int var_19 = 859158704U;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 1287220459289171915ULL;
_Bool var_22 = (_Bool)1;
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
