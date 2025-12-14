#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 8961745362705814217ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)33940;
long long int var_9 = -4027295395555690086LL;
int zero = 0;
int var_16 = 102944956;
int var_17 = -1460665306;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
