#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8607257743618445452LL;
signed char var_1 = (signed char)-100;
_Bool var_2 = (_Bool)0;
int var_5 = 154586631;
unsigned char var_7 = (unsigned char)12;
long long int var_9 = 1076743096432954804LL;
unsigned int var_12 = 1979307151U;
int zero = 0;
unsigned short var_14 = (unsigned short)60191;
signed char var_15 = (signed char)30;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
