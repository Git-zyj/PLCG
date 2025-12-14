#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2308719075451807792ULL;
unsigned long long int var_2 = 9696842964304878538ULL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-1761;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2204072889U;
unsigned short var_8 = (unsigned short)32091;
long long int var_9 = 3092275446352257942LL;
short var_10 = (short)31554;
unsigned short var_11 = (unsigned short)28193;
short var_14 = (short)-20738;
int zero = 0;
unsigned long long int var_15 = 4265731390990987315ULL;
long long int var_16 = -194984356553522797LL;
long long int var_17 = -1126623989920335095LL;
int var_18 = 346454603;
void init() {
}

void checksum() {
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
