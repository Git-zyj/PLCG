#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11842701435931596588ULL;
unsigned int var_2 = 1229387977U;
_Bool var_3 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)215;
int var_11 = 1509845286;
int zero = 0;
unsigned int var_15 = 527505286U;
unsigned long long int var_16 = 13676922742331845670ULL;
long long int var_17 = 6614743122584499061LL;
short var_18 = (short)-10810;
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
