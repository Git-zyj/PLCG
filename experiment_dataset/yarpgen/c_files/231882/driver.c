#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16783048660762978380ULL;
long long int var_1 = -5951269039363298510LL;
signed char var_5 = (signed char)-58;
signed char var_8 = (signed char)(-127 - 1);
long long int var_9 = -1542075910321929469LL;
unsigned char var_10 = (unsigned char)65;
long long int var_15 = -1948900808064981821LL;
unsigned long long int var_16 = 18074130884450121872ULL;
long long int var_17 = 8059931189485839012LL;
int zero = 0;
unsigned int var_18 = 1598491478U;
short var_19 = (short)24492;
short var_20 = (short)-13425;
short var_21 = (short)18587;
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
