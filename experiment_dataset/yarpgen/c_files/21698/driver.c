#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15808870124861768533ULL;
unsigned long long int var_2 = 10366385979415150049ULL;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 14941098344568969906ULL;
int zero = 0;
short var_13 = (short)1386;
unsigned long long int var_14 = 8874803366365914439ULL;
short var_15 = (short)-12794;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
