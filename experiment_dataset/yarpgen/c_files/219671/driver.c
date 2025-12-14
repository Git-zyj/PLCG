#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)8646;
long long int var_5 = 7406616086290723301LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 535488541141510506ULL;
unsigned long long int var_9 = 8791930026682248187ULL;
short var_11 = (short)-3885;
short var_13 = (short)26580;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 98062534U;
_Bool var_19 = (_Bool)1;
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
