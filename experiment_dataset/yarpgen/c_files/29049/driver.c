#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22642;
_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)-126;
unsigned long long int var_5 = 2654905773634947252ULL;
unsigned char var_8 = (unsigned char)87;
short var_9 = (short)19877;
unsigned long long int var_12 = 12642701763921864108ULL;
unsigned short var_13 = (unsigned short)17481;
long long int var_15 = -1617189907253232596LL;
long long int var_16 = -4477008939163773107LL;
int zero = 0;
unsigned long long int var_17 = 17520423194886949622ULL;
signed char var_18 = (signed char)31;
long long int var_19 = 7256892178313220963LL;
long long int var_20 = -2199546395009081450LL;
void init() {
}

void checksum() {
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
