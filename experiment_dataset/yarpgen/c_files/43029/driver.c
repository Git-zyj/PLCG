#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1273;
unsigned short var_3 = (unsigned short)5868;
short var_4 = (short)-15432;
short var_8 = (short)-23896;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 4023633982248296263ULL;
unsigned int var_17 = 1939656383U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
