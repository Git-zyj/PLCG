#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27759;
short var_2 = (short)-19491;
long long int var_12 = -3502285174262937699LL;
long long int var_14 = -2719715742280005980LL;
unsigned char var_16 = (unsigned char)101;
int zero = 0;
unsigned char var_17 = (unsigned char)238;
short var_18 = (short)9093;
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
