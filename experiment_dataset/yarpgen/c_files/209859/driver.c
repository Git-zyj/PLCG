#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)8;
_Bool var_3 = (_Bool)0;
unsigned int var_6 = 2862479054U;
int zero = 0;
unsigned int var_19 = 1582070624U;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 17386352011091569866ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
