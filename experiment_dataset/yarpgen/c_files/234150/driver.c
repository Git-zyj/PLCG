#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2609929298059668712LL;
long long int var_3 = 4797514611248067771LL;
_Bool var_4 = (_Bool)0;
int var_7 = 16292386;
unsigned int var_11 = 4094692509U;
unsigned char var_15 = (unsigned char)148;
unsigned short var_18 = (unsigned short)37264;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1272642655;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)48;
signed char var_23 = (signed char)106;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
