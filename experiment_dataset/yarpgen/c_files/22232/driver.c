#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4377439289701983221ULL;
long long int var_2 = -2901216158925037802LL;
_Bool var_5 = (_Bool)0;
signed char var_9 = (signed char)60;
unsigned long long int var_10 = 8697137312776260629ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_13 = (short)13150;
unsigned long long int var_14 = 160568862962647712ULL;
unsigned short var_15 = (unsigned short)57490;
unsigned short var_16 = (unsigned short)40279;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
