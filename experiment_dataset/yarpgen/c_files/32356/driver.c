#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 14373408110165088019ULL;
unsigned long long int var_8 = 14101156828199491456ULL;
int var_10 = -76243932;
unsigned char var_14 = (unsigned char)192;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1448751212U;
int zero = 0;
unsigned int var_17 = 1556068429U;
unsigned int var_18 = 2054820959U;
unsigned short var_19 = (unsigned short)56470;
int var_20 = -1787818212;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
