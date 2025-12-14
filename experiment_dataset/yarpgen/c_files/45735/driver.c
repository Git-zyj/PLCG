#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-26200;
signed char var_7 = (signed char)33;
short var_8 = (short)-28318;
short var_9 = (short)31494;
int zero = 0;
long long int var_13 = -4648348249476847840LL;
signed char var_14 = (signed char)-4;
void init() {
}

void checksum() {
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
