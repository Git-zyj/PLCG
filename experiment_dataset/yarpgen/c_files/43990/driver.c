#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2318;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_7 = -7678523078575710244LL;
unsigned int var_13 = 413437348U;
int zero = 0;
unsigned long long int var_16 = 15466299963044649205ULL;
unsigned long long int var_17 = 17515134945506947462ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
