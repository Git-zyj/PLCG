#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15112530065372472913ULL;
long long int var_1 = 7395329564427192612LL;
int var_2 = -950699255;
unsigned char var_9 = (unsigned char)19;
long long int var_10 = -3492437606331497713LL;
int zero = 0;
short var_14 = (short)2996;
_Bool var_15 = (_Bool)0;
short var_16 = (short)32427;
void init() {
}

void checksum() {
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
