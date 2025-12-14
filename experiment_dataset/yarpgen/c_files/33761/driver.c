#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14832156779150032321ULL;
unsigned int var_8 = 1488814980U;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 13858242543177853717ULL;
unsigned long long int var_14 = 6904048195721143012ULL;
signed char var_15 = (signed char)-98;
int zero = 0;
unsigned long long int var_16 = 9444780164488960018ULL;
unsigned long long int var_17 = 14978710627405790708ULL;
unsigned int var_18 = 947300405U;
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
