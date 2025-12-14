#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)177;
_Bool var_3 = (_Bool)1;
int var_5 = 1313965932;
_Bool var_6 = (_Bool)1;
short var_8 = (short)12239;
unsigned int var_9 = 3721562698U;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)31599;
unsigned int var_17 = 1918435114U;
unsigned char var_18 = (unsigned char)228;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
