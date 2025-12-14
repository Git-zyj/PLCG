#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)171;
signed char var_2 = (signed char)69;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)50;
unsigned long long int var_7 = 16290376918013777074ULL;
int var_13 = -638294912;
signed char var_15 = (signed char)-1;
int zero = 0;
int var_19 = 657192670;
signed char var_20 = (signed char)123;
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
