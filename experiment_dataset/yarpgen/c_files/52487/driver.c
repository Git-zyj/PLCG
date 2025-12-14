#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2961434470029527547ULL;
unsigned long long int var_3 = 13956318030267520020ULL;
long long int var_11 = -6476222131448010145LL;
unsigned short var_13 = (unsigned short)18506;
int var_17 = 178354403;
int zero = 0;
unsigned int var_18 = 3912369054U;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1396253713U;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
