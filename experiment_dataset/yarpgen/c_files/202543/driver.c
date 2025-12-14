#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-103;
short var_10 = (short)19993;
unsigned char var_17 = (unsigned char)22;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 13451920922917220375ULL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)1095;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
