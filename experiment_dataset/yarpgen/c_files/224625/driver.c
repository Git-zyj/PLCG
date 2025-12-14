#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)77;
unsigned char var_9 = (unsigned char)176;
unsigned long long int var_12 = 15394809247562397967ULL;
signed char var_15 = (signed char)-75;
int zero = 0;
unsigned char var_18 = (unsigned char)54;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)44701;
void init() {
}

void checksum() {
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
