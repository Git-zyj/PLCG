#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2637515521U;
int var_2 = -30734704;
unsigned int var_4 = 917809503U;
signed char var_5 = (signed char)118;
_Bool var_6 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2110327467U;
long long int var_15 = 7183915541644444799LL;
signed char var_17 = (signed char)75;
int zero = 0;
signed char var_19 = (signed char)96;
short var_20 = (short)-1219;
unsigned short var_21 = (unsigned short)53434;
void init() {
}

void checksum() {
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
