#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)20;
signed char var_2 = (signed char)-78;
unsigned char var_3 = (unsigned char)29;
signed char var_4 = (signed char)7;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)62732;
signed char var_10 = (signed char)-35;
short var_13 = (short)-28859;
int zero = 0;
unsigned char var_15 = (unsigned char)136;
unsigned char var_16 = (unsigned char)150;
unsigned int var_17 = 2332556070U;
int var_18 = 991341874;
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
