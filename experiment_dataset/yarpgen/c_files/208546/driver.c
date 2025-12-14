#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)83;
short var_1 = (short)4981;
unsigned char var_3 = (unsigned char)107;
unsigned long long int var_4 = 14035208013466307331ULL;
unsigned int var_5 = 3937514269U;
unsigned int var_7 = 1813276500U;
signed char var_11 = (signed char)-116;
unsigned int var_12 = 2599851975U;
unsigned char var_13 = (unsigned char)65;
signed char var_14 = (signed char)-40;
short var_15 = (short)-22549;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)25;
int zero = 0;
unsigned int var_19 = 3321221910U;
unsigned char var_20 = (unsigned char)39;
unsigned long long int var_21 = 15890538086735126379ULL;
int var_22 = -1715350584;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
