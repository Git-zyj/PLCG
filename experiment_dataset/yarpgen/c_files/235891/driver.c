#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)90;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)43277;
unsigned char var_6 = (unsigned char)88;
unsigned short var_9 = (unsigned short)52781;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)786;
int var_12 = -2106073026;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
