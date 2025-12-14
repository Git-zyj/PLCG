#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned short var_7 = (unsigned short)12976;
unsigned int var_9 = 3511646015U;
unsigned int var_12 = 3674259480U;
unsigned char var_14 = (unsigned char)169;
unsigned long long int var_15 = 16591118553598998158ULL;
int zero = 0;
short var_17 = (short)30401;
short var_18 = (short)31353;
unsigned int var_19 = 2296645491U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
