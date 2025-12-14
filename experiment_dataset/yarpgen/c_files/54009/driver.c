#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)80;
_Bool var_2 = (_Bool)0;
short var_4 = (short)3031;
unsigned int var_6 = 29118228U;
signed char var_8 = (signed char)-97;
unsigned int var_10 = 3993015976U;
int zero = 0;
short var_11 = (short)-31531;
short var_12 = (short)3488;
unsigned long long int var_13 = 1516181850214300832ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
