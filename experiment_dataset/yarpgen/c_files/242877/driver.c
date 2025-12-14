#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29973;
unsigned short var_2 = (unsigned short)42667;
unsigned short var_3 = (unsigned short)16536;
unsigned short var_5 = (unsigned short)46324;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)34227;
unsigned short var_9 = (unsigned short)47484;
unsigned short var_10 = (unsigned short)31767;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)52600;
unsigned int var_13 = 2475188744U;
void init() {
}

void checksum() {
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
