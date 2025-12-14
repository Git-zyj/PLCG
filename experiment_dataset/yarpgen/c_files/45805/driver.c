#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10650303426285436546ULL;
unsigned char var_3 = (unsigned char)122;
unsigned int var_4 = 2048461158U;
unsigned char var_7 = (unsigned char)110;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 3618679156U;
signed char var_12 = (signed char)-116;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 5457865490633682821ULL;
short var_15 = (short)-12232;
unsigned char var_16 = (unsigned char)186;
void init() {
}

void checksum() {
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
