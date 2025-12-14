#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)63;
unsigned int var_2 = 938230377U;
unsigned char var_4 = (unsigned char)102;
unsigned short var_7 = (unsigned short)20610;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)10746;
long long int var_10 = 9221143034934716748LL;
unsigned int var_11 = 1555604467U;
unsigned char var_13 = (unsigned char)140;
int zero = 0;
signed char var_14 = (signed char)-3;
unsigned short var_15 = (unsigned short)62176;
unsigned long long int var_16 = 17937606317404959065ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
