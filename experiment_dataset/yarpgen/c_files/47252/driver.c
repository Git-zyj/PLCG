#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_4 = 195068804U;
long long int var_5 = 2434935501647643218LL;
short var_6 = (short)-14722;
signed char var_8 = (signed char)-110;
int zero = 0;
unsigned long long int var_10 = 17494980803386898047ULL;
unsigned short var_11 = (unsigned short)11987;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
