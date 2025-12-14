#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8901356255330441864LL;
signed char var_3 = (signed char)-73;
signed char var_4 = (signed char)-34;
int var_6 = -635658515;
signed char var_10 = (signed char)-91;
unsigned short var_11 = (unsigned short)63449;
signed char var_12 = (signed char)43;
long long int var_14 = -4092685589241310425LL;
unsigned long long int var_16 = 16678185427198457176ULL;
int zero = 0;
int var_17 = -716796526;
unsigned long long int var_18 = 469897473058435910ULL;
unsigned short var_19 = (unsigned short)51645;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
