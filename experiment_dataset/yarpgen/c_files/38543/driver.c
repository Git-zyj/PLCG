#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25171;
int var_5 = -1444612418;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)100;
unsigned short var_10 = (unsigned short)31624;
unsigned long long int var_12 = 12725030784158817746ULL;
int zero = 0;
unsigned int var_16 = 3696268882U;
unsigned int var_17 = 452377660U;
unsigned int var_18 = 2590592828U;
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
