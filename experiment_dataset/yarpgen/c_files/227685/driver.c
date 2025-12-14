#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6942239192599246118LL;
unsigned int var_4 = 397091237U;
unsigned int var_7 = 1290370713U;
unsigned short var_8 = (unsigned short)2491;
long long int var_9 = -386191092705708532LL;
unsigned short var_10 = (unsigned short)11832;
signed char var_12 = (signed char)-79;
short var_15 = (short)15967;
unsigned long long int var_18 = 2163827851908153914ULL;
int zero = 0;
long long int var_19 = -3803594209141979465LL;
long long int var_20 = 4697168586533084985LL;
long long int var_21 = 2345377300763861861LL;
int var_22 = 399300007;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
