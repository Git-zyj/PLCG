#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5113;
unsigned long long int var_1 = 2850891102379251108ULL;
unsigned long long int var_2 = 11026366955052501225ULL;
unsigned int var_3 = 2657424639U;
unsigned long long int var_4 = 2232987962899160607ULL;
_Bool var_5 = (_Bool)1;
long long int var_6 = -6859084211376840876LL;
int var_10 = 972013765;
short var_13 = (short)30554;
int zero = 0;
unsigned int var_18 = 80578325U;
short var_19 = (short)23896;
long long int var_20 = -1355704668657481554LL;
int var_21 = -2114107274;
long long int var_22 = 5664601032794915078LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
