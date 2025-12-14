#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6194909710704207422LL;
int var_2 = -946129648;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 3075807508U;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)33198;
unsigned long long int var_10 = 16024579162982324593ULL;
unsigned long long int var_11 = 10200238687575837073ULL;
long long int var_13 = 1524275462236725060LL;
unsigned int var_14 = 938718033U;
int var_16 = -2144156265;
long long int var_17 = -8178299182650822689LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -2365596707177816686LL;
unsigned long long int var_21 = 10277824914007588718ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
