#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43139;
short var_2 = (short)-4147;
_Bool var_3 = (_Bool)1;
unsigned short var_7 = (unsigned short)4655;
int var_10 = 548695;
long long int var_12 = 4199246723835849481LL;
long long int var_13 = -8549776659931760679LL;
int zero = 0;
unsigned long long int var_16 = 1503655988583743831ULL;
unsigned int var_17 = 886888441U;
unsigned char var_18 = (unsigned char)127;
void init() {
}

void checksum() {
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
