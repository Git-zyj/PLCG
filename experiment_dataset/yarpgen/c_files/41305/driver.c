#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5832826205091902469ULL;
unsigned char var_3 = (unsigned char)193;
unsigned char var_7 = (unsigned char)98;
int var_9 = -1627471665;
_Bool var_11 = (_Bool)0;
unsigned char var_15 = (unsigned char)164;
unsigned int var_16 = 2054993980U;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-15540;
unsigned long long int var_19 = 17896591820878359582ULL;
short var_20 = (short)2363;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
