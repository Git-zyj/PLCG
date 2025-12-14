#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-25;
_Bool var_7 = (_Bool)0;
short var_11 = (short)2196;
int var_12 = -622412391;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_16 = -1947753783;
signed char var_17 = (signed char)37;
void init() {
}

void checksum() {
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
