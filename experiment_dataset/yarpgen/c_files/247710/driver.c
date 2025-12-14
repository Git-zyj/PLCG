#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -339704303;
unsigned long long int var_1 = 16840607860096414634ULL;
int var_2 = 1099028956;
int var_3 = -354587321;
_Bool var_5 = (_Bool)0;
int var_12 = 1870456899;
int zero = 0;
long long int var_14 = 8209692817062607742LL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)23063;
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
