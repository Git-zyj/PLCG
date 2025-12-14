#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1548656728;
_Bool var_4 = (_Bool)1;
int var_8 = -1326376611;
int zero = 0;
signed char var_10 = (signed char)-74;
unsigned long long int var_11 = 7353752382136105282ULL;
unsigned int var_12 = 1680406391U;
unsigned char var_13 = (unsigned char)172;
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
