#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -48597920;
int var_3 = -1821755049;
long long int var_4 = 2320031373382939554LL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)15;
_Bool var_11 = (_Bool)1;
long long int var_12 = -2778713542847528198LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -270435348;
unsigned short var_16 = (unsigned short)29277;
int var_17 = -1429772896;
unsigned int var_18 = 2901812067U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
