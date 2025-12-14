#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_7 = 2271044667619428141ULL;
int var_9 = -1699459671;
unsigned long long int var_10 = 13747373760892750455ULL;
unsigned long long int var_13 = 15509062565444814046ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_20 = (short)-3240;
unsigned short var_21 = (unsigned short)12806;
short var_22 = (short)-5396;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
