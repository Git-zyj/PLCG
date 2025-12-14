#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -423758060;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
int var_5 = 1354605628;
unsigned short var_6 = (unsigned short)64414;
unsigned int var_8 = 3392834648U;
short var_10 = (short)16466;
int zero = 0;
unsigned int var_11 = 1739480683U;
unsigned short var_12 = (unsigned short)59080;
unsigned short var_13 = (unsigned short)37657;
unsigned short var_14 = (unsigned short)9344;
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
