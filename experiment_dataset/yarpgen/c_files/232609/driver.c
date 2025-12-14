#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 880093450;
_Bool var_5 = (_Bool)0;
int var_6 = 1115965691;
_Bool var_10 = (_Bool)1;
unsigned short var_13 = (unsigned short)9288;
long long int var_14 = 821799891653160838LL;
int zero = 0;
long long int var_19 = -7244140390621473103LL;
long long int var_20 = 3187636661715214346LL;
void init() {
}

void checksum() {
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
