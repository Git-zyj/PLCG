#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9767618563380896842ULL;
short var_6 = (short)-24755;
long long int var_7 = 2428872217460970868LL;
unsigned long long int var_12 = 7561857332648804178ULL;
unsigned int var_17 = 711529737U;
unsigned int var_18 = 1513222414U;
int zero = 0;
unsigned char var_19 = (unsigned char)52;
unsigned char var_20 = (unsigned char)99;
short var_21 = (short)18926;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
