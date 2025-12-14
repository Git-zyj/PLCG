#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14786;
int var_2 = 2048432263;
unsigned short var_3 = (unsigned short)4368;
unsigned int var_4 = 275124136U;
short var_5 = (short)16917;
_Bool var_7 = (_Bool)0;
int var_8 = -1607526669;
int var_9 = 1153980887;
int zero = 0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-7213;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
