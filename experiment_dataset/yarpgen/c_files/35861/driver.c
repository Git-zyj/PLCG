#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5894;
int var_3 = 631440715;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 7251778128586329711ULL;
unsigned short var_8 = (unsigned short)43062;
short var_9 = (short)-22810;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)4065;
unsigned long long int var_12 = 5917898729559189887ULL;
short var_13 = (short)32683;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
