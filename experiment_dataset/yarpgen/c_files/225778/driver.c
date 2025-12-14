#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10014;
int var_1 = -1225015812;
unsigned long long int var_2 = 16047731017021263491ULL;
signed char var_6 = (signed char)-10;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 4102225548U;
long long int var_11 = 8295407895685825657LL;
unsigned long long int var_13 = 13323442571105590242ULL;
int zero = 0;
unsigned long long int var_14 = 13085269169291318123ULL;
long long int var_15 = -2720100979325376620LL;
void init() {
}

void checksum() {
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
