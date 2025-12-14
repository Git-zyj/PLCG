#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5774980491232355175LL;
unsigned int var_3 = 1243486839U;
unsigned long long int var_6 = 9208155042351846796ULL;
long long int var_9 = 1163666942094208801LL;
unsigned long long int var_13 = 10130529436164912575ULL;
short var_14 = (short)-18310;
unsigned long long int var_16 = 6213530049592148053ULL;
long long int var_17 = -1400371345238279164LL;
unsigned int var_19 = 664599409U;
int zero = 0;
int var_20 = -1501263320;
signed char var_21 = (signed char)13;
unsigned long long int var_22 = 16490946821390074821ULL;
void init() {
}

void checksum() {
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
