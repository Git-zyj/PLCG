#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -632922732;
short var_2 = (short)-15381;
unsigned char var_3 = (unsigned char)239;
int zero = 0;
int var_14 = -1784531395;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-69;
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
