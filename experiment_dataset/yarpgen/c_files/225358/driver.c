#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24609;
unsigned char var_2 = (unsigned char)57;
int var_3 = -1149455821;
unsigned short var_5 = (unsigned short)25277;
int var_8 = -547502375;
unsigned int var_10 = 1846483921U;
int var_13 = 495541805;
int zero = 0;
long long int var_14 = -7389853768785347307LL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-54;
signed char var_17 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
