#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61749;
unsigned int var_1 = 2484153771U;
short var_2 = (short)13388;
unsigned char var_4 = (unsigned char)34;
unsigned char var_5 = (unsigned char)52;
_Bool var_6 = (_Bool)0;
short var_9 = (short)29950;
int zero = 0;
unsigned short var_10 = (unsigned short)19586;
unsigned short var_11 = (unsigned short)26497;
signed char var_12 = (signed char)-111;
unsigned int var_13 = 2460275679U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
