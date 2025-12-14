#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)55;
int var_5 = 314519820;
unsigned int var_6 = 938218677U;
long long int var_7 = -463628132101729253LL;
unsigned char var_9 = (unsigned char)145;
int zero = 0;
long long int var_10 = 5525260919133123306LL;
short var_11 = (short)-2466;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
