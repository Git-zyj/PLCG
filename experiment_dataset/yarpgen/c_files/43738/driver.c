#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)69;
unsigned long long int var_3 = 6317748140208648892ULL;
signed char var_5 = (signed char)31;
unsigned int var_7 = 3609869064U;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)24;
int zero = 0;
unsigned short var_12 = (unsigned short)5349;
int var_13 = -957265314;
signed char var_14 = (signed char)61;
signed char var_15 = (signed char)97;
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
