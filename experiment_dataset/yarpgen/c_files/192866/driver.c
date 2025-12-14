#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1559269137U;
unsigned int var_1 = 3190807606U;
unsigned short var_2 = (unsigned short)64777;
unsigned short var_5 = (unsigned short)7364;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-108;
unsigned long long int var_11 = 9801149029656004602ULL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)34;
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
