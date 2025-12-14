#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15204731516788821353ULL;
unsigned long long int var_11 = 11496147337619804503ULL;
unsigned int var_13 = 1349377653U;
short var_15 = (short)13964;
signed char var_16 = (signed char)-37;
int zero = 0;
unsigned char var_18 = (unsigned char)43;
unsigned short var_19 = (unsigned short)35052;
void init() {
}

void checksum() {
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
