#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3596422301U;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)59792;
unsigned short var_4 = (unsigned short)5196;
short var_5 = (short)-27848;
_Bool var_6 = (_Bool)1;
long long int var_7 = -6630522681522704008LL;
unsigned char var_9 = (unsigned char)43;
int zero = 0;
int var_10 = -1707623110;
long long int var_11 = -1867044930981224911LL;
int var_12 = 430330234;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
