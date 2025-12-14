#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1642801660U;
unsigned long long int var_3 = 13212151364879487996ULL;
unsigned int var_8 = 3152309390U;
unsigned long long int var_10 = 11704476603837198473ULL;
unsigned long long int var_11 = 2790607960619465678ULL;
int zero = 0;
unsigned int var_15 = 305912120U;
unsigned int var_16 = 2963348023U;
unsigned int var_17 = 1218937412U;
unsigned long long int var_18 = 7433230412462596735ULL;
unsigned int var_19 = 3073660410U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
