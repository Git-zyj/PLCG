#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25253;
unsigned long long int var_2 = 8390316842818770427ULL;
long long int var_4 = 1252513942635754167LL;
short var_6 = (short)-30100;
unsigned long long int var_8 = 5303817741974290715ULL;
int zero = 0;
signed char var_11 = (signed char)-63;
unsigned int var_12 = 2660879002U;
short var_13 = (short)-12167;
unsigned char var_14 = (unsigned char)141;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
