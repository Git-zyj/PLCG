#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_3 = 1973568588683195302LL;
unsigned short var_8 = (unsigned short)47306;
unsigned long long int var_9 = 7187957325405213846ULL;
_Bool var_14 = (_Bool)1;
int var_18 = 1072848471;
int zero = 0;
unsigned long long int var_19 = 9370991612194036072ULL;
signed char var_20 = (signed char)-15;
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
