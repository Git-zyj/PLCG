#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -136383771;
unsigned char var_3 = (unsigned char)121;
int var_9 = 1591001258;
unsigned char var_15 = (unsigned char)210;
int zero = 0;
unsigned short var_19 = (unsigned short)49612;
unsigned char var_20 = (unsigned char)57;
unsigned short var_21 = (unsigned short)52250;
unsigned char var_22 = (unsigned char)96;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
