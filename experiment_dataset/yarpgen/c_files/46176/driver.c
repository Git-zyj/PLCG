#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)63;
short var_2 = (short)15311;
unsigned long long int var_3 = 8534373399585914143ULL;
unsigned long long int var_5 = 13406224445065170346ULL;
unsigned long long int var_6 = 10094382131432813831ULL;
long long int var_11 = 7354021822070799258LL;
long long int var_14 = 9174561078671019753LL;
int zero = 0;
unsigned long long int var_15 = 10843100370663591212ULL;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
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
