#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 17951326793825926736ULL;
long long int var_4 = -4314357336369331464LL;
int var_5 = -1473505266;
short var_11 = (short)-7633;
int zero = 0;
unsigned long long int var_18 = 5365801864934151643ULL;
short var_19 = (short)-12374;
unsigned char var_20 = (unsigned char)84;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
