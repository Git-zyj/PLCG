#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)247;
int var_1 = -803790106;
long long int var_3 = 4245862028115107326LL;
unsigned int var_5 = 2411445439U;
signed char var_6 = (signed char)37;
short var_9 = (short)20738;
unsigned long long int var_11 = 16181965251118366196ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = -935067698;
signed char var_16 = (signed char)101;
signed char var_17 = (signed char)28;
short var_18 = (short)30276;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
