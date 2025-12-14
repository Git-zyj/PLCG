#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)(-127 - 1);
long long int var_3 = -4104201565703337643LL;
long long int var_4 = 4212319504085743108LL;
unsigned short var_7 = (unsigned short)28369;
unsigned int var_8 = 3739717534U;
unsigned long long int var_9 = 11078003144177002211ULL;
long long int var_12 = -3083758915173285280LL;
int zero = 0;
unsigned long long int var_16 = 4373550571551738024ULL;
short var_17 = (short)-24903;
signed char var_18 = (signed char)55;
unsigned short var_19 = (unsigned short)51443;
unsigned short var_20 = (unsigned short)24601;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
