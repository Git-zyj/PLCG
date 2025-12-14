#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 486038250U;
_Bool var_1 = (_Bool)0;
long long int var_2 = 4425360325081042507LL;
int var_7 = -1239926150;
int var_8 = 1358679592;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)247;
unsigned long long int var_17 = 7806250190972300670ULL;
int var_18 = 581410127;
long long int var_19 = 640072469811109581LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
