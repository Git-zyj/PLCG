#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32619;
short var_1 = (short)-13514;
short var_3 = (short)22694;
signed char var_9 = (signed char)-22;
int zero = 0;
unsigned char var_13 = (unsigned char)57;
long long int var_14 = 4794450307516098708LL;
short var_15 = (short)-15368;
void init() {
}

void checksum() {
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
