#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1191024244;
_Bool var_9 = (_Bool)1;
int var_11 = -866115053;
unsigned int var_16 = 728425744U;
int var_17 = 1255132464;
int zero = 0;
long long int var_18 = -4622018810456651868LL;
long long int var_19 = 3075515264687660213LL;
unsigned long long int var_20 = 12529108842357294005ULL;
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
