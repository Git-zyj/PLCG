#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4167026526U;
int var_2 = 1620817663;
signed char var_8 = (signed char)-105;
signed char var_10 = (signed char)32;
unsigned char var_15 = (unsigned char)116;
signed char var_17 = (signed char)46;
int zero = 0;
short var_20 = (short)22001;
_Bool var_21 = (_Bool)1;
int var_22 = -966002253;
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
