#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
unsigned int var_1 = 3563023784U;
int var_2 = -726660076;
unsigned long long int var_5 = 17107252806580490406ULL;
unsigned int var_6 = 3161466934U;
long long int var_7 = -2547060094064077841LL;
short var_9 = (short)30269;
unsigned short var_10 = (unsigned short)40076;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)226;
short var_13 = (short)21849;
unsigned long long int var_14 = 15723311600806138595ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
