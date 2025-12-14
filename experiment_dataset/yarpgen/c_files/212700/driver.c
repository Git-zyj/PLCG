#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)162;
unsigned int var_8 = 1732869685U;
short var_9 = (short)-10859;
long long int var_15 = 2093574369159042475LL;
unsigned short var_17 = (unsigned short)58694;
unsigned int var_18 = 1310284822U;
int zero = 0;
short var_19 = (short)13611;
signed char var_20 = (signed char)49;
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
