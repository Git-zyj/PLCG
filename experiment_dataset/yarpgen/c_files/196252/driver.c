#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3252287902350308598LL;
int var_8 = -146593759;
int var_10 = -1450358267;
long long int var_12 = -6834720414798569309LL;
signed char var_15 = (signed char)-66;
int zero = 0;
short var_17 = (short)15468;
unsigned char var_18 = (unsigned char)117;
signed char var_19 = (signed char)-5;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
