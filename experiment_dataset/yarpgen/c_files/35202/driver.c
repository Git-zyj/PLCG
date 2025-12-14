#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13660117294911328413ULL;
unsigned long long int var_4 = 738673931497399759ULL;
unsigned short var_7 = (unsigned short)42988;
signed char var_8 = (signed char)21;
long long int var_10 = 4575604528889449009LL;
int var_11 = -228419210;
long long int var_13 = -8019490549435697292LL;
int zero = 0;
unsigned int var_14 = 3395920323U;
long long int var_15 = 999841556198167716LL;
unsigned short var_16 = (unsigned short)952;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
