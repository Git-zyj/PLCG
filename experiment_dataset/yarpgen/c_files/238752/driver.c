#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)10265;
unsigned short var_8 = (unsigned short)8075;
int var_9 = 1486143142;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)64737;
unsigned int var_21 = 3400065706U;
void init() {
}

void checksum() {
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
