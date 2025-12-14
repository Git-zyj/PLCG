#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_6 = 1409620390U;
unsigned short var_11 = (unsigned short)53779;
unsigned long long int var_15 = 12869750330555791796ULL;
int zero = 0;
long long int var_18 = -6334975740356590106LL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)14529;
unsigned int var_21 = 36268108U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
