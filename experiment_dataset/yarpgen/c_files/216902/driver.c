#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)40;
unsigned int var_4 = 1453742707U;
_Bool var_10 = (_Bool)1;
unsigned char var_14 = (unsigned char)53;
unsigned char var_15 = (unsigned char)57;
unsigned char var_18 = (unsigned char)197;
int zero = 0;
signed char var_20 = (signed char)68;
unsigned char var_21 = (unsigned char)90;
unsigned char var_22 = (unsigned char)44;
signed char var_23 = (signed char)-14;
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
