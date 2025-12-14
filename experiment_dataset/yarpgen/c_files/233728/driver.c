#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3888506975U;
unsigned short var_7 = (unsigned short)62166;
unsigned int var_8 = 1905854829U;
unsigned short var_11 = (unsigned short)61288;
unsigned short var_13 = (unsigned short)25697;
unsigned char var_16 = (unsigned char)217;
int zero = 0;
unsigned short var_17 = (unsigned short)2578;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)19788;
unsigned short var_20 = (unsigned short)63763;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
