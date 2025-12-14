#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 480025684;
unsigned int var_3 = 1369671195U;
unsigned char var_4 = (unsigned char)62;
unsigned short var_15 = (unsigned short)63717;
int zero = 0;
int var_16 = -1529468040;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)149;
signed char var_19 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
