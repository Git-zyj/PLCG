#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16787655383995058614ULL;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)21;
signed char var_5 = (signed char)87;
unsigned long long int var_6 = 2283345325219793510ULL;
int var_7 = -833910802;
unsigned int var_9 = 4153034906U;
int zero = 0;
long long int var_10 = -782552440927243161LL;
short var_11 = (short)11588;
unsigned short var_12 = (unsigned short)50098;
signed char var_13 = (signed char)12;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
