#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -688004283;
int var_3 = 143411668;
signed char var_7 = (signed char)20;
int var_8 = -1104856495;
unsigned char var_9 = (unsigned char)11;
signed char var_10 = (signed char)89;
signed char var_11 = (signed char)-92;
int zero = 0;
signed char var_12 = (signed char)45;
int var_13 = 850455444;
unsigned char var_14 = (unsigned char)185;
unsigned char var_15 = (unsigned char)153;
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
