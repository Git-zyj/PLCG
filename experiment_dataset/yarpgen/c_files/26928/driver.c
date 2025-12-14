#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)246;
short var_1 = (short)2712;
unsigned int var_2 = 494465814U;
signed char var_3 = (signed char)-104;
unsigned int var_8 = 4116221865U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 3901326829046840901ULL;
unsigned char var_12 = (unsigned char)26;
unsigned short var_13 = (unsigned short)12869;
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
