#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1226417302;
long long int var_6 = -3412900767361635617LL;
unsigned char var_8 = (unsigned char)239;
unsigned long long int var_9 = 2862525551616430881ULL;
unsigned char var_10 = (unsigned char)47;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 224390874U;
long long int var_16 = -1955741949141032062LL;
void init() {
}

void checksum() {
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
