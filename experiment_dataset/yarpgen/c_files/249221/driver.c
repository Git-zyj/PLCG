#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 360397682;
unsigned long long int var_6 = 13989820024098933857ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 2294739666727069027ULL;
int var_15 = 2059471427;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
