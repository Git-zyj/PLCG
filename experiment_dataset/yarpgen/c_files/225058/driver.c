#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)62;
unsigned long long int var_5 = 11191789160126170268ULL;
short var_8 = (short)-24655;
short var_9 = (short)9760;
_Bool var_11 = (_Bool)0;
unsigned char var_14 = (unsigned char)147;
int var_16 = 818109052;
int zero = 0;
unsigned short var_18 = (unsigned short)59516;
long long int var_19 = -875864471806208650LL;
signed char var_20 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
