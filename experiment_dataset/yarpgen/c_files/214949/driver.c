#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -5418979124287995597LL;
int var_7 = -1245075376;
int zero = 0;
unsigned short var_12 = (unsigned short)58454;
signed char var_13 = (signed char)114;
signed char var_14 = (signed char)-8;
int var_15 = 1784830315;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
