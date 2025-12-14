#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15643;
_Bool var_4 = (_Bool)0;
int var_6 = 15028162;
long long int var_13 = 6406427821115681346LL;
int zero = 0;
unsigned long long int var_16 = 14117160423417359691ULL;
signed char var_17 = (signed char)-96;
unsigned char var_18 = (unsigned char)34;
short var_19 = (short)27894;
short var_20 = (short)22887;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
