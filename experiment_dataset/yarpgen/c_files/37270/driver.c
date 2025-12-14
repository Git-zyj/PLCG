#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-34;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-93;
int zero = 0;
signed char var_12 = (signed char)-20;
short var_13 = (short)-7595;
signed char var_14 = (signed char)44;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
