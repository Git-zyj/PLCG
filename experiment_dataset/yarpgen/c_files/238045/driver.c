#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)101;
unsigned int var_4 = 3223552189U;
short var_5 = (short)-25083;
unsigned int var_7 = 4033410581U;
unsigned int var_8 = 2204801816U;
signed char var_9 = (signed char)65;
_Bool var_10 = (_Bool)1;
short var_11 = (short)16512;
int zero = 0;
unsigned int var_12 = 2411741807U;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
