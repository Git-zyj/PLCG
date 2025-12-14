#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 721067426;
unsigned char var_9 = (unsigned char)136;
int var_11 = -762151700;
unsigned long long int var_12 = 12671955825026341866ULL;
int var_14 = 1829360088;
int zero = 0;
short var_19 = (short)-28939;
int var_20 = 1388692958;
short var_21 = (short)4524;
int var_22 = -1754446813;
short var_23 = (short)-6352;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
