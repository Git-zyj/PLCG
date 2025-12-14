#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9582259186492146694ULL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 13709324329125979688ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 1432852109152059514ULL;
unsigned long long int var_10 = 16206094169285357619ULL;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-23699;
unsigned char var_15 = (unsigned char)185;
int zero = 0;
long long int var_19 = -6773314458635276618LL;
short var_20 = (short)-18447;
void init() {
}

void checksum() {
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
