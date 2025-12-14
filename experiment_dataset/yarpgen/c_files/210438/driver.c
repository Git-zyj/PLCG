#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_5 = (_Bool)1;
short var_7 = (short)-2352;
unsigned int var_8 = 2825989193U;
long long int var_10 = -3825544334402385834LL;
signed char var_11 = (signed char)-28;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 8866807348217714429ULL;
unsigned int var_14 = 642828710U;
signed char var_15 = (signed char)-21;
unsigned short var_16 = (unsigned short)1962;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
