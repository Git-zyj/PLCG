#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1552422824U;
long long int var_16 = 362727419186441116LL;
int zero = 0;
signed char var_20 = (signed char)-63;
short var_21 = (short)11813;
unsigned long long int var_22 = 14175066117186891006ULL;
unsigned char var_23 = (unsigned char)135;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
