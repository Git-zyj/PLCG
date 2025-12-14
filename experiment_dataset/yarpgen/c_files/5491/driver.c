#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3641214496U;
unsigned int var_6 = 2711129210U;
unsigned int var_8 = 2509829468U;
long long int var_9 = -8956535551271379068LL;
short var_11 = (short)7356;
unsigned char var_15 = (unsigned char)248;
unsigned int var_18 = 2466467764U;
unsigned long long int var_19 = 7809195039968805409ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 1842005361660463291ULL;
void init() {
}

void checksum() {
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
