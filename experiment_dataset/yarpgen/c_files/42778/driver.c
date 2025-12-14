#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1492345122;
_Bool var_1 = (_Bool)0;
int var_2 = -517469031;
unsigned long long int var_6 = 17286482315137706930ULL;
unsigned long long int var_8 = 11808578941298396433ULL;
signed char var_9 = (signed char)-18;
unsigned long long int var_10 = 4196583459612651578ULL;
unsigned long long int var_11 = 15459930213519334939ULL;
int var_14 = 893362594;
int zero = 0;
unsigned char var_15 = (unsigned char)168;
int var_16 = -183628768;
int var_17 = 1021764822;
int var_18 = -2119082698;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
