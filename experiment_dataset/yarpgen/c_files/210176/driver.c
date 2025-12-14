#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4234707193503096731ULL;
short var_1 = (short)-15148;
unsigned short var_3 = (unsigned short)19246;
short var_4 = (short)28832;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)35432;
int var_14 = 534830078;
int zero = 0;
unsigned long long int var_20 = 1497271475937141844ULL;
unsigned int var_21 = 744959402U;
int var_22 = -23835175;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
