#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13984;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 608462523U;
unsigned int var_4 = 3669127032U;
unsigned long long int var_5 = 3750913197325203875ULL;
unsigned long long int var_6 = 14041310706832270593ULL;
signed char var_7 = (signed char)0;
unsigned long long int var_8 = 4829761824460634738ULL;
int zero = 0;
unsigned long long int var_11 = 13930025706691935303ULL;
short var_12 = (short)-24910;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
