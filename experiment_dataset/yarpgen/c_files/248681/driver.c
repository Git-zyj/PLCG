#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17397927898153671749ULL;
unsigned short var_4 = (unsigned short)38132;
long long int var_5 = -668608883106453198LL;
unsigned char var_6 = (unsigned char)85;
int var_8 = 899868323;
unsigned char var_12 = (unsigned char)148;
unsigned int var_14 = 4050195141U;
int var_16 = 2132729987;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)43849;
unsigned short var_21 = (unsigned short)37678;
unsigned short var_22 = (unsigned short)65030;
void init() {
}

void checksum() {
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
