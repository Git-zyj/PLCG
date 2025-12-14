#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31044;
unsigned int var_1 = 1224226575U;
short var_4 = (short)-31845;
unsigned long long int var_6 = 13123570884708054232ULL;
_Bool var_7 = (_Bool)1;
int var_9 = 155228074;
unsigned short var_10 = (unsigned short)33138;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)45674;
unsigned short var_16 = (unsigned short)40234;
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
