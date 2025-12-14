#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15527808572070503690ULL;
unsigned int var_3 = 2345605406U;
unsigned char var_4 = (unsigned char)208;
_Bool var_7 = (_Bool)1;
unsigned short var_12 = (unsigned short)63243;
unsigned int var_15 = 818179159U;
int zero = 0;
unsigned short var_20 = (unsigned short)32480;
signed char var_21 = (signed char)57;
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
