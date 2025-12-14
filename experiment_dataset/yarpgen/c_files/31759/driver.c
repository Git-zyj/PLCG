#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)7;
unsigned short var_8 = (unsigned short)6882;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -8890272118972056548LL;
unsigned char var_12 = (unsigned char)181;
unsigned char var_13 = (unsigned char)176;
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
