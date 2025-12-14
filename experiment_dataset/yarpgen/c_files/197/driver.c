#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1403514055;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 829673442U;
short var_12 = (short)-1597;
unsigned short var_14 = (unsigned short)37206;
unsigned int var_18 = 1070912507U;
int zero = 0;
int var_19 = -1965510040;
short var_20 = (short)-10576;
unsigned short var_21 = (unsigned short)62407;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
