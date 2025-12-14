#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)13;
short var_2 = (short)24252;
signed char var_4 = (signed char)109;
short var_5 = (short)20268;
short var_6 = (short)10060;
_Bool var_7 = (_Bool)0;
int var_8 = 2141355162;
short var_9 = (short)6383;
int zero = 0;
unsigned char var_12 = (unsigned char)50;
unsigned char var_13 = (unsigned char)185;
unsigned short var_14 = (unsigned short)40460;
unsigned int var_15 = 1107244514U;
long long int var_16 = 4081005773996844131LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
