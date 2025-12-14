#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)100;
int var_5 = -1374419982;
long long int var_6 = 9133926467916633026LL;
unsigned short var_11 = (unsigned short)46556;
unsigned short var_15 = (unsigned short)30146;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3917634946U;
void init() {
}

void checksum() {
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
