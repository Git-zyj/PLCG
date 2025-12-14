#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3858807962U;
short var_6 = (short)28651;
int var_8 = 836551128;
signed char var_9 = (signed char)90;
signed char var_10 = (signed char)-66;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_14 = (short)-22293;
int var_15 = -1428916897;
unsigned short var_16 = (unsigned short)33021;
unsigned short var_17 = (unsigned short)64807;
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
