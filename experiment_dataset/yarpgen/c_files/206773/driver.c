#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5802951554143968353LL;
unsigned char var_6 = (unsigned char)109;
unsigned long long int var_8 = 9678964715616299098ULL;
unsigned int var_9 = 123766492U;
_Bool var_11 = (_Bool)0;
short var_14 = (short)7830;
unsigned short var_15 = (unsigned short)41037;
int zero = 0;
short var_18 = (short)13538;
unsigned long long int var_19 = 2632820076133857144ULL;
unsigned int var_20 = 3166971708U;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
