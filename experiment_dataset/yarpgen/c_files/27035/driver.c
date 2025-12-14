#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14031617019421703888ULL;
short var_8 = (short)25900;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)1;
long long int var_19 = -1676418910076945899LL;
int zero = 0;
unsigned long long int var_20 = 10221798593202877303ULL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)10769;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 13559056263327899181ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
