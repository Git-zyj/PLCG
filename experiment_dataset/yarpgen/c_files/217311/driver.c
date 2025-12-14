#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)103;
unsigned short var_7 = (unsigned short)1381;
unsigned short var_8 = (unsigned short)65376;
unsigned int var_12 = 3393454713U;
unsigned short var_14 = (unsigned short)26773;
int zero = 0;
int var_20 = -1333885722;
signed char var_21 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
