#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
short var_1 = (short)-15802;
int var_4 = 1015790976;
int var_5 = -1766724751;
long long int var_6 = -1676287634986592328LL;
unsigned char var_9 = (unsigned char)248;
int var_12 = -417904466;
int zero = 0;
int var_14 = -125149465;
unsigned int var_15 = 3207887782U;
long long int var_16 = 5185966654384799084LL;
int var_17 = 891912534;
short var_18 = (short)7993;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
