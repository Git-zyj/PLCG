#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)3;
unsigned int var_5 = 3621645044U;
unsigned short var_7 = (unsigned short)29164;
short var_9 = (short)13010;
unsigned long long int var_12 = 5490565777937942435ULL;
int zero = 0;
short var_19 = (short)-15358;
unsigned char var_20 = (unsigned char)240;
unsigned char var_21 = (unsigned char)42;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
