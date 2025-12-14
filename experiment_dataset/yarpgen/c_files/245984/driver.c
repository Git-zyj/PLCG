#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_3 = 85856653U;
unsigned short var_7 = (unsigned short)2983;
unsigned long long int var_9 = 9585772310406815781ULL;
unsigned char var_10 = (unsigned char)158;
int zero = 0;
unsigned int var_13 = 3949506219U;
signed char var_14 = (signed char)-52;
unsigned char var_15 = (unsigned char)217;
short var_16 = (short)126;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
