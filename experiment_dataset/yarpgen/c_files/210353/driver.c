#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16273137449209377039ULL;
signed char var_1 = (signed char)-82;
int var_2 = -1766285165;
signed char var_8 = (signed char)51;
signed char var_10 = (signed char)30;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-86;
long long int var_13 = -3520175066262062121LL;
void init() {
}

void checksum() {
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
