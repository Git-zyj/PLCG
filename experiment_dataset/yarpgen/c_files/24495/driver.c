#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 782638374113539151ULL;
int var_6 = 270145465;
unsigned short var_8 = (unsigned short)18493;
unsigned char var_12 = (unsigned char)152;
int zero = 0;
signed char var_14 = (signed char)88;
unsigned short var_15 = (unsigned short)369;
void init() {
}

void checksum() {
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
