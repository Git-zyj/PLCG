#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11157138817170838883ULL;
long long int var_3 = -7798416770303221083LL;
unsigned long long int var_7 = 10792646455017019974ULL;
long long int var_8 = 5736806757789246774LL;
int var_10 = -2045178709;
int zero = 0;
unsigned long long int var_11 = 1109683335043494236ULL;
signed char var_12 = (signed char)86;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
