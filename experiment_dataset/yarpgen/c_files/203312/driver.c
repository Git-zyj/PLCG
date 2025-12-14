#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 977951807U;
unsigned long long int var_1 = 18399604078838130643ULL;
unsigned long long int var_4 = 135355322752910284ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)14582;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)68;
unsigned char var_12 = (unsigned char)176;
unsigned long long int var_13 = 12159127641627225162ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
