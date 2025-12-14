#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 1764791895705728795LL;
unsigned long long int var_7 = 15974358132833510151ULL;
unsigned long long int var_9 = 3674985404225787152ULL;
int zero = 0;
short var_11 = (short)10308;
short var_12 = (short)-32546;
signed char var_13 = (signed char)116;
short var_14 = (short)-4397;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
