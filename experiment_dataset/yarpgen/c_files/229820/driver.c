#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44788;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-5611;
long long int var_9 = -6791342158628310336LL;
unsigned short var_10 = (unsigned short)54313;
unsigned long long int var_11 = 16375169812794544648ULL;
int zero = 0;
long long int var_12 = -3756838523351732758LL;
unsigned int var_13 = 3896985163U;
unsigned int var_14 = 2996626339U;
void init() {
}

void checksum() {
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
