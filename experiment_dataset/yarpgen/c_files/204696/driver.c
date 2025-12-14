#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1958248675;
unsigned int var_1 = 1291447124U;
signed char var_3 = (signed char)104;
short var_4 = (short)-2543;
signed char var_5 = (signed char)39;
signed char var_6 = (signed char)86;
unsigned long long int var_9 = 16753386497977170384ULL;
long long int var_10 = -1458362614603171053LL;
int zero = 0;
long long int var_13 = -4439712342327542710LL;
short var_14 = (short)-29805;
unsigned long long int var_15 = 246155612030604199ULL;
void init() {
}

void checksum() {
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
