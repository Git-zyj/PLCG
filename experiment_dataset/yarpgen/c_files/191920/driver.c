#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7784751914517171399LL;
short var_2 = (short)-21069;
unsigned long long int var_3 = 4100921924652265156ULL;
unsigned short var_5 = (unsigned short)2326;
signed char var_6 = (signed char)112;
unsigned long long int var_9 = 9393172727874727456ULL;
unsigned long long int var_10 = 4319522842240582546ULL;
int zero = 0;
short var_13 = (short)-30020;
unsigned int var_14 = 3663979884U;
int var_15 = -1517413406;
unsigned int var_16 = 2880867049U;
void init() {
}

void checksum() {
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
