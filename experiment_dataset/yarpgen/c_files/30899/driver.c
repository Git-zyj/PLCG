#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2084998585;
long long int var_3 = 2036676767360985490LL;
long long int var_5 = -6101390267599886317LL;
long long int var_6 = -1094382091903755968LL;
long long int var_8 = -7372290713554913740LL;
int var_9 = 1713100830;
unsigned short var_10 = (unsigned short)12135;
unsigned int var_11 = 4233227130U;
int zero = 0;
long long int var_12 = 2850213806513140705LL;
unsigned int var_13 = 3450999839U;
int var_14 = 1223086812;
int var_15 = 1631251972;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
