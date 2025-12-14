#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)52;
unsigned int var_5 = 3315448224U;
unsigned short var_7 = (unsigned short)40479;
unsigned short var_8 = (unsigned short)18118;
long long int var_9 = 8320999479885806523LL;
unsigned short var_14 = (unsigned short)15337;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-26392;
short var_17 = (short)-21938;
void init() {
}

void checksum() {
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
