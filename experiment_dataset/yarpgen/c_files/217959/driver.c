#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5144941613972671369LL;
short var_1 = (short)26450;
int var_7 = 1971002184;
int var_9 = 1131742914;
unsigned char var_10 = (unsigned char)176;
unsigned char var_13 = (unsigned char)92;
unsigned char var_15 = (unsigned char)236;
int zero = 0;
signed char var_16 = (signed char)-68;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-28;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
