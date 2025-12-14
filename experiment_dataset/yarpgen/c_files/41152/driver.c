#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 63793309816778977LL;
long long int var_1 = -683688372162457712LL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 12392560206639075480ULL;
short var_5 = (short)10830;
long long int var_6 = -6563472923980313312LL;
short var_7 = (short)12374;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 12989435580330502729ULL;
unsigned char var_11 = (unsigned char)162;
signed char var_12 = (signed char)24;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
