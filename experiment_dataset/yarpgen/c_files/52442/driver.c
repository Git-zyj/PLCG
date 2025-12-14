#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 801797594;
short var_4 = (short)28228;
unsigned short var_7 = (unsigned short)59606;
unsigned short var_10 = (unsigned short)30044;
short var_11 = (short)-22141;
short var_13 = (short)-22926;
short var_14 = (short)18609;
int zero = 0;
unsigned long long int var_15 = 16240628025582704487ULL;
unsigned int var_16 = 3766325996U;
short var_17 = (short)-30709;
short var_18 = (short)22382;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
