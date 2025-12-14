#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 29605204;
int var_6 = 2077348286;
_Bool var_7 = (_Bool)1;
int var_11 = 268827469;
unsigned long long int var_12 = 16627445829921515342ULL;
unsigned long long int var_13 = 2348588659961409945ULL;
long long int var_14 = 2799839502424072819LL;
int zero = 0;
short var_15 = (short)26830;
unsigned long long int var_16 = 7916756258308893327ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
