#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1595504984U;
unsigned long long int var_2 = 18106708710194577649ULL;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 3125424560U;
signed char var_6 = (signed char)-63;
unsigned long long int var_7 = 11443444453400920988ULL;
int var_9 = 188088749;
int zero = 0;
unsigned int var_10 = 2851309814U;
unsigned short var_11 = (unsigned short)2036;
_Bool var_12 = (_Bool)1;
int var_13 = 541752632;
int var_14 = -1968216502;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
