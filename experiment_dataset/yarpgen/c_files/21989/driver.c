#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16862;
unsigned int var_1 = 3384739719U;
long long int var_2 = 6131525603346541498LL;
unsigned char var_3 = (unsigned char)111;
signed char var_5 = (signed char)2;
short var_7 = (short)27711;
unsigned int var_8 = 504845850U;
int var_10 = 878095227;
unsigned short var_12 = (unsigned short)1145;
short var_13 = (short)-11876;
signed char var_14 = (signed char)-1;
int zero = 0;
unsigned long long int var_15 = 9701049980138224081ULL;
unsigned short var_16 = (unsigned short)7464;
long long int var_17 = -1273763184270178748LL;
void init() {
}

void checksum() {
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
