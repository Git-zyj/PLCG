#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)41235;
unsigned char var_2 = (unsigned char)127;
unsigned long long int var_3 = 1803977751448794220ULL;
_Bool var_4 = (_Bool)0;
long long int var_5 = -5077114035284396580LL;
unsigned short var_6 = (unsigned short)45226;
unsigned short var_8 = (unsigned short)61755;
unsigned char var_9 = (unsigned char)181;
unsigned char var_10 = (unsigned char)168;
unsigned short var_12 = (unsigned short)40439;
int zero = 0;
long long int var_13 = -4876848602940149850LL;
unsigned char var_14 = (unsigned char)47;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-26;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
