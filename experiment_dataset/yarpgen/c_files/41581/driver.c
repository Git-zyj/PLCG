#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1184861163U;
long long int var_4 = -4604565284207121821LL;
long long int var_7 = 7306645928753773871LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 14841029573224224115ULL;
unsigned long long int var_11 = 10935580444587472130ULL;
unsigned long long int var_12 = 4752947928651379900ULL;
short var_14 = (short)-10369;
int zero = 0;
unsigned int var_15 = 2204007308U;
unsigned int var_16 = 4004574587U;
unsigned int var_17 = 2418606042U;
long long int var_18 = 1757186611900462614LL;
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
