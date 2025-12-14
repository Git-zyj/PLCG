#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2460804117046392854LL;
long long int var_4 = -5220326271082385580LL;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)213;
unsigned int var_11 = 1508973310U;
unsigned int var_12 = 3777023141U;
int zero = 0;
unsigned int var_19 = 1362433448U;
_Bool var_20 = (_Bool)1;
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
