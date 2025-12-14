#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6895868654429018421LL;
unsigned long long int var_2 = 3136270974056423871ULL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
long long int var_9 = -342840919601771544LL;
unsigned long long int var_10 = 5102774059521323541ULL;
_Bool var_11 = (_Bool)1;
long long int var_13 = 1954669380889615869LL;
long long int var_14 = 3195025695949947419LL;
unsigned long long int var_15 = 9950669101872006680ULL;
int zero = 0;
unsigned long long int var_16 = 3622661958402769916ULL;
_Bool var_17 = (_Bool)1;
long long int var_18 = 7301351726148800096LL;
unsigned long long int var_19 = 13613370388253869518ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
