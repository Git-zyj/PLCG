#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1291977762U;
unsigned char var_7 = (unsigned char)133;
unsigned char var_12 = (unsigned char)208;
unsigned long long int var_13 = 17290088129538090971ULL;
int zero = 0;
signed char var_16 = (signed char)65;
signed char var_17 = (signed char)-59;
long long int var_18 = -6436895469224007805LL;
_Bool var_19 = (_Bool)1;
long long int var_20 = 176672187112817734LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
