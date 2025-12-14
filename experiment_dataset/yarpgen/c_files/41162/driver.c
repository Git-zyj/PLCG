#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30465;
short var_5 = (short)2004;
long long int var_8 = -8053393875815063865LL;
unsigned short var_9 = (unsigned short)43121;
int zero = 0;
long long int var_12 = 4837720071926352774LL;
signed char var_13 = (signed char)-84;
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
