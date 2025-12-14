#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10569;
unsigned char var_1 = (unsigned char)66;
int var_3 = -975230834;
unsigned short var_5 = (unsigned short)4294;
signed char var_6 = (signed char)30;
_Bool var_9 = (_Bool)0;
short var_10 = (short)23096;
int zero = 0;
unsigned char var_11 = (unsigned char)106;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
