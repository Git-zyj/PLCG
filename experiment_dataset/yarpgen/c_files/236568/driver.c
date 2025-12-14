#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-70;
int var_2 = -2107245108;
int var_8 = 275801311;
unsigned char var_12 = (unsigned char)248;
unsigned int var_13 = 1342732819U;
unsigned long long int var_14 = 7715932111899834536ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)151;
unsigned short var_17 = (unsigned short)20872;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
