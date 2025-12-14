#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)41;
short var_2 = (short)-7415;
long long int var_3 = 1588935920510563312LL;
short var_7 = (short)-19708;
unsigned long long int var_10 = 7618162884713002609ULL;
unsigned char var_11 = (unsigned char)71;
_Bool var_12 = (_Bool)1;
long long int var_13 = 2693556926648832992LL;
unsigned short var_16 = (unsigned short)32038;
int zero = 0;
signed char var_17 = (signed char)59;
int var_18 = -1281720691;
unsigned long long int var_19 = 8124631328763406861ULL;
int var_20 = 1354804631;
short var_21 = (short)-23973;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
