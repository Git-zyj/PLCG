#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-69;
int var_2 = -1266474006;
unsigned char var_3 = (unsigned char)23;
unsigned short var_6 = (unsigned short)55939;
int zero = 0;
unsigned char var_11 = (unsigned char)110;
unsigned char var_12 = (unsigned char)207;
long long int var_13 = 838603891660001552LL;
unsigned char var_14 = (unsigned char)44;
unsigned short var_15 = (unsigned short)42558;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
