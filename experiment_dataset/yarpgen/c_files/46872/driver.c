#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1250637734;
short var_6 = (short)-21721;
int var_10 = -836040382;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-13;
int zero = 0;
short var_17 = (short)-26421;
unsigned char var_18 = (unsigned char)50;
void init() {
}

void checksum() {
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
