#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6273206675605765501LL;
int var_1 = -1060516886;
short var_2 = (short)22958;
unsigned long long int var_5 = 3837194074209970663ULL;
int var_8 = -1529765838;
signed char var_9 = (signed char)15;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = -1911746707;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
