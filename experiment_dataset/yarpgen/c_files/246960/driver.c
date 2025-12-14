#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 2804007915U;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)138;
short var_7 = (short)-6707;
unsigned short var_8 = (unsigned short)6601;
short var_9 = (short)26996;
unsigned long long int var_10 = 18126120677173557134ULL;
signed char var_16 = (signed char)-97;
int zero = 0;
unsigned long long int var_20 = 6968613809036892315ULL;
unsigned short var_21 = (unsigned short)1778;
unsigned long long int var_22 = 7687110016669261303ULL;
unsigned long long int var_23 = 10679171611449445480ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
