#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4673294382292569893ULL;
int var_4 = 1088438736;
unsigned int var_5 = 947556029U;
unsigned int var_7 = 746520582U;
signed char var_9 = (signed char)71;
short var_10 = (short)-17975;
int zero = 0;
unsigned int var_14 = 3900302604U;
unsigned long long int var_15 = 14718762923327935607ULL;
long long int var_16 = -733502661385130787LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
