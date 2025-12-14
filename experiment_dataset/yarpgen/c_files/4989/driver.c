#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)240;
unsigned char var_9 = (unsigned char)220;
unsigned short var_10 = (unsigned short)26578;
unsigned char var_13 = (unsigned char)69;
unsigned int var_17 = 441153231U;
int zero = 0;
unsigned char var_20 = (unsigned char)206;
_Bool var_21 = (_Bool)0;
int var_22 = 684651224;
unsigned char var_23 = (unsigned char)101;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
