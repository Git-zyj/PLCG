#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 757925236U;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 1637789504U;
int var_11 = -154841729;
int var_12 = -1664346251;
signed char var_13 = (signed char)-39;
_Bool var_14 = (_Bool)0;
int var_15 = 1915754836;
unsigned int var_16 = 3322935563U;
int zero = 0;
signed char var_17 = (signed char)-96;
unsigned int var_18 = 3631328647U;
unsigned short var_19 = (unsigned short)49044;
void init() {
}

void checksum() {
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
