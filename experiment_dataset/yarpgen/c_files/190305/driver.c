#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -171463685;
unsigned int var_4 = 2211107707U;
unsigned long long int var_5 = 18145572492483057090ULL;
unsigned int var_6 = 1320145650U;
unsigned int var_7 = 2576938499U;
_Bool var_8 = (_Bool)1;
short var_9 = (short)5016;
unsigned long long int var_10 = 5177055353287866872ULL;
unsigned int var_11 = 3417868944U;
unsigned long long int var_14 = 7276163701234649497ULL;
unsigned char var_15 = (unsigned char)199;
int zero = 0;
unsigned short var_16 = (unsigned short)16148;
unsigned long long int var_17 = 6219760920218121826ULL;
int var_18 = -707242711;
long long int var_19 = -2840663245095116644LL;
unsigned int var_20 = 45953093U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
