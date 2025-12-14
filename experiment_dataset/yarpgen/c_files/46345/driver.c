#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5133;
long long int var_1 = 2391041027949520284LL;
int var_3 = 172737051;
unsigned char var_6 = (unsigned char)113;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)196;
int var_19 = 1253152454;
int var_20 = 1051369658;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
