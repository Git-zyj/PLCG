#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2795786851U;
long long int var_2 = 8918242300976289278LL;
unsigned long long int var_3 = 1489075955242380944ULL;
unsigned short var_4 = (unsigned short)40382;
int var_5 = -1479342844;
short var_6 = (short)27523;
signed char var_7 = (signed char)5;
unsigned long long int var_8 = 12170087907113150069ULL;
unsigned long long int var_9 = 18052638830205797062ULL;
short var_10 = (short)2028;
int zero = 0;
int var_11 = 1024629536;
unsigned long long int var_12 = 2575263666752840930ULL;
unsigned long long int var_13 = 489515510313614792ULL;
int var_14 = -2113149455;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
