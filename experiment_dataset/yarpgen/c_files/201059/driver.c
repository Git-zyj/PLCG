#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)119;
unsigned long long int var_6 = 16541749874919852446ULL;
short var_8 = (short)-2430;
int var_9 = 511212437;
unsigned char var_10 = (unsigned char)157;
int zero = 0;
int var_12 = -72354457;
long long int var_13 = -4524952417272477221LL;
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
