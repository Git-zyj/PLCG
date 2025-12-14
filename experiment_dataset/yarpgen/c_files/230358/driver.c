#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 570291205502412173ULL;
unsigned int var_2 = 2160698784U;
unsigned char var_4 = (unsigned char)246;
_Bool var_5 = (_Bool)1;
short var_6 = (short)5995;
short var_10 = (short)3515;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)15055;
unsigned int var_13 = 419912108U;
short var_14 = (short)28658;
unsigned long long int var_15 = 15579659592333374400ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
