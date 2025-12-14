#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13186710334198095591ULL;
unsigned int var_4 = 1459057539U;
unsigned int var_5 = 562668670U;
unsigned int var_6 = 2402339455U;
unsigned int var_9 = 2528925554U;
unsigned char var_10 = (unsigned char)199;
long long int var_12 = -9115162299948741069LL;
unsigned int var_16 = 3350016267U;
unsigned char var_17 = (unsigned char)78;
unsigned char var_18 = (unsigned char)90;
int zero = 0;
unsigned char var_19 = (unsigned char)136;
unsigned short var_20 = (unsigned short)47771;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
