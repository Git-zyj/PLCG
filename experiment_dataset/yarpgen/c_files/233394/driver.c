#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1670814369U;
unsigned int var_1 = 884522986U;
unsigned short var_4 = (unsigned short)19443;
unsigned char var_6 = (unsigned char)195;
_Bool var_9 = (_Bool)1;
unsigned int var_12 = 318705308U;
unsigned long long int var_13 = 10367732022243414199ULL;
long long int var_15 = 2462078154735976462LL;
unsigned char var_16 = (unsigned char)254;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)37534;
_Bool var_19 = (_Bool)1;
long long int var_20 = 7274118863560470410LL;
void init() {
}

void checksum() {
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
