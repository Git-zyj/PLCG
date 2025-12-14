#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1676610170;
int var_2 = -2037208604;
unsigned short var_3 = (unsigned short)4997;
unsigned char var_5 = (unsigned char)207;
unsigned long long int var_7 = 3903656024096635835ULL;
int var_10 = -2126468404;
short var_12 = (short)29263;
unsigned short var_13 = (unsigned short)62241;
unsigned char var_15 = (unsigned char)175;
int var_17 = 1012542838;
unsigned long long int var_18 = 10779225552936454665ULL;
int zero = 0;
unsigned int var_19 = 2595032221U;
unsigned char var_20 = (unsigned char)51;
long long int var_21 = -2083142650770767807LL;
long long int var_22 = 7771237962465435998LL;
int var_23 = 617319719;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
