#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3912987826467747090LL;
unsigned long long int var_4 = 17442647090785401076ULL;
signed char var_11 = (signed char)52;
unsigned int var_14 = 3671900966U;
signed char var_15 = (signed char)95;
int zero = 0;
unsigned char var_17 = (unsigned char)2;
unsigned short var_18 = (unsigned short)59973;
unsigned int var_19 = 1321725313U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
