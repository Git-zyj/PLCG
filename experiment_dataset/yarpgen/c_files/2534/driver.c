#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)29186;
int var_3 = 1325108155;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-15;
signed char var_7 = (signed char)-81;
signed char var_9 = (signed char)-69;
unsigned short var_10 = (unsigned short)31320;
int var_11 = 542993606;
signed char var_12 = (signed char)27;
int var_13 = -1837909402;
signed char var_14 = (signed char)-47;
int var_15 = -1368713620;
int var_16 = 1041682121;
unsigned short var_17 = (unsigned short)51972;
int zero = 0;
long long int var_18 = -6139775460430786466LL;
unsigned long long int var_19 = 14298699894448514838ULL;
void init() {
}

void checksum() {
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
