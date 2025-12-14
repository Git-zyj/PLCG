#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2190641928994177098LL;
signed char var_2 = (signed char)-14;
unsigned int var_3 = 4158105153U;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)46867;
unsigned int var_10 = 1691995456U;
unsigned long long int var_11 = 5059439790292459032ULL;
unsigned short var_12 = (unsigned short)56793;
unsigned short var_14 = (unsigned short)62139;
unsigned char var_15 = (unsigned char)127;
int zero = 0;
unsigned long long int var_16 = 12632590800323248335ULL;
long long int var_17 = -612386477633265868LL;
short var_18 = (short)-30375;
void init() {
}

void checksum() {
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
