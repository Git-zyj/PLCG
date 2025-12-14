#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24647;
short var_1 = (short)6553;
signed char var_2 = (signed char)59;
unsigned long long int var_3 = 16763894779270848189ULL;
short var_5 = (short)-3444;
signed char var_6 = (signed char)51;
short var_7 = (short)-31029;
short var_8 = (short)-32044;
unsigned int var_9 = 958254159U;
unsigned char var_10 = (unsigned char)187;
short var_11 = (short)-21587;
int zero = 0;
short var_13 = (short)15949;
short var_14 = (short)5115;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
