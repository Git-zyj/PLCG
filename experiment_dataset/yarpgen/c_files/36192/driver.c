#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 178931449;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
short var_7 = (short)22707;
unsigned long long int var_8 = 2423321347645392434ULL;
unsigned long long int var_11 = 7508203315048282143ULL;
int zero = 0;
int var_12 = -1846864138;
int var_13 = -71832432;
unsigned char var_14 = (unsigned char)78;
short var_15 = (short)21261;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
