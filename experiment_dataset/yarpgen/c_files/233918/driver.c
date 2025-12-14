#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2618508452U;
_Bool var_1 = (_Bool)0;
short var_3 = (short)-26042;
signed char var_4 = (signed char)62;
short var_8 = (short)18774;
short var_9 = (short)-30912;
int zero = 0;
unsigned short var_16 = (unsigned short)64390;
unsigned char var_17 = (unsigned char)82;
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
