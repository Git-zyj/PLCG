#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)24;
unsigned short var_5 = (unsigned short)1744;
long long int var_8 = -3286916750055502494LL;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 1191521520U;
long long int var_11 = -1856570481055919218LL;
long long int var_12 = -4192803905147723435LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
