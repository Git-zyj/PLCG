#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9669;
unsigned char var_1 = (unsigned char)124;
unsigned short var_2 = (unsigned short)9229;
unsigned short var_3 = (unsigned short)34949;
unsigned int var_4 = 1099041556U;
unsigned short var_5 = (unsigned short)50609;
unsigned int var_6 = 781906346U;
signed char var_7 = (signed char)-75;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 61542708U;
int zero = 0;
unsigned int var_12 = 1803010106U;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)17959;
int var_15 = -1377450694;
void init() {
}

void checksum() {
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
