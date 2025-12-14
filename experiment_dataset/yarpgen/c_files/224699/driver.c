#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 879378839;
unsigned char var_8 = (unsigned char)32;
unsigned char var_10 = (unsigned char)89;
unsigned int var_12 = 2799801016U;
int var_13 = -1795603655;
long long int var_14 = -2501244226387391983LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_20 = 41422440;
int var_21 = -1778076410;
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
