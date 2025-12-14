#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1590482710U;
short var_2 = (short)-26680;
signed char var_4 = (signed char)-66;
unsigned short var_7 = (unsigned short)2124;
unsigned short var_8 = (unsigned short)59667;
signed char var_9 = (signed char)-56;
int zero = 0;
short var_13 = (short)2752;
signed char var_14 = (signed char)-29;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)68;
short var_17 = (short)-32304;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
