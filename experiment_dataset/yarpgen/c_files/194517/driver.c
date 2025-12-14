#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7102192685388357047LL;
unsigned long long int var_4 = 709483466310226910ULL;
unsigned long long int var_6 = 5118299468397170818ULL;
unsigned long long int var_9 = 5186558862501656794ULL;
unsigned long long int var_10 = 11815956223284769761ULL;
int var_11 = 79183752;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 15514852372036281872ULL;
unsigned long long int var_16 = 16441372426691453591ULL;
unsigned short var_17 = (unsigned short)20100;
unsigned long long int var_18 = 3089878850331587176ULL;
int zero = 0;
long long int var_19 = -2326660977626583679LL;
long long int var_20 = -8343996197831732832LL;
long long int var_21 = 7293190124874052218LL;
unsigned int var_22 = 563157233U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
