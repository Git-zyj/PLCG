#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9071;
short var_1 = (short)-11401;
unsigned long long int var_7 = 10710710167956604044ULL;
unsigned char var_8 = (unsigned char)144;
_Bool var_10 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 5067153904126666949ULL;
_Bool var_16 = (_Bool)1;
short var_17 = (short)20090;
unsigned int var_18 = 695644136U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
