#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)873;
long long int var_1 = 6328819059413148725LL;
unsigned short var_2 = (unsigned short)57873;
signed char var_3 = (signed char)-119;
long long int var_4 = -5626552804139919786LL;
long long int var_5 = 1599365257780084555LL;
unsigned char var_12 = (unsigned char)104;
int zero = 0;
long long int var_13 = -8094695619384335751LL;
unsigned int var_14 = 3427568810U;
unsigned char var_15 = (unsigned char)143;
unsigned int var_16 = 2456889960U;
unsigned char var_17 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
