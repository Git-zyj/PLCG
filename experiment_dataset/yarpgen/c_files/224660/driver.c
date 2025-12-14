#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10158;
short var_1 = (short)-1836;
long long int var_5 = -1393274680063178423LL;
unsigned long long int var_6 = 8079259298092956905ULL;
long long int var_7 = -2854174298557002549LL;
signed char var_9 = (signed char)41;
unsigned short var_11 = (unsigned short)38269;
unsigned short var_12 = (unsigned short)33048;
unsigned char var_13 = (unsigned char)158;
unsigned char var_14 = (unsigned char)244;
int var_15 = 407878036;
int zero = 0;
long long int var_16 = 5609388269783391874LL;
int var_17 = 976184434;
int var_18 = -957073660;
signed char var_19 = (signed char)125;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
