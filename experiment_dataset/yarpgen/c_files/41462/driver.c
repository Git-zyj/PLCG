#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 861155365U;
long long int var_5 = -8898933621383060088LL;
long long int var_6 = -325000518230413314LL;
unsigned int var_9 = 4194064096U;
int zero = 0;
unsigned short var_11 = (unsigned short)52593;
short var_12 = (short)-2559;
long long int var_13 = -810060755456699230LL;
short var_14 = (short)-26001;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
