#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15758437273952912500ULL;
unsigned short var_1 = (unsigned short)698;
_Bool var_6 = (_Bool)1;
short var_7 = (short)24638;
signed char var_9 = (signed char)74;
unsigned short var_10 = (unsigned short)15748;
signed char var_11 = (signed char)-54;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-119;
int var_15 = 280554982;
int zero = 0;
signed char var_16 = (signed char)2;
long long int var_17 = 7145617935834655829LL;
signed char var_18 = (signed char)61;
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
