#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5564651777716521679LL;
long long int var_9 = 9116328220826644872LL;
unsigned long long int var_16 = 923630501895535264ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -112358246;
_Bool var_19 = (_Bool)0;
int var_20 = 1195452240;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
