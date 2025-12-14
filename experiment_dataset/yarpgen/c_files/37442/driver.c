#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)49;
long long int var_2 = 2435645809428735412LL;
unsigned short var_4 = (unsigned short)31488;
unsigned long long int var_5 = 14693552634337179008ULL;
int var_9 = -1894104637;
int var_11 = 1788822493;
int zero = 0;
short var_13 = (short)-11144;
int var_14 = 1236580456;
_Bool var_15 = (_Bool)1;
int var_16 = -1443353163;
_Bool var_17 = (_Bool)1;
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
