#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 6562494612710363313ULL;
unsigned short var_9 = (unsigned short)43575;
int var_10 = -1742046244;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 10413868656894467797ULL;
unsigned long long int var_18 = 13321912634465374066ULL;
signed char var_19 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
