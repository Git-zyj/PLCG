#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)53;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)38986;
unsigned short var_6 = (unsigned short)39989;
_Bool var_9 = (_Bool)0;
signed char var_13 = (signed char)62;
long long int var_15 = -6673312073362270131LL;
int zero = 0;
long long int var_16 = 8884168544790099875LL;
short var_17 = (short)-9655;
int var_18 = 1746197298;
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
