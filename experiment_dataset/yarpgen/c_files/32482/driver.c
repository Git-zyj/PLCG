#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22698;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 3405717528U;
unsigned int var_7 = 2244503627U;
unsigned short var_8 = (unsigned short)54224;
unsigned int var_9 = 3775512135U;
int zero = 0;
unsigned int var_11 = 2252439950U;
unsigned int var_12 = 733527528U;
unsigned int var_13 = 1630877310U;
unsigned int var_14 = 1715257123U;
void init() {
}

void checksum() {
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
