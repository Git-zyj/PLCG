#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11471237692517082505ULL;
int var_4 = -36195857;
long long int var_7 = -3288488490390421034LL;
signed char var_8 = (signed char)68;
unsigned char var_13 = (unsigned char)12;
unsigned int var_15 = 1221338103U;
int var_16 = -847723391;
int zero = 0;
int var_19 = 1969792839;
unsigned int var_20 = 268189663U;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 129476832U;
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
