#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6976370947039370341ULL;
unsigned short var_8 = (unsigned short)43485;
signed char var_9 = (signed char)-46;
int zero = 0;
unsigned char var_15 = (unsigned char)121;
signed char var_16 = (signed char)126;
long long int var_17 = -8568614544033158020LL;
unsigned long long int var_18 = 6969892705191468992ULL;
int var_19 = 1765360158;
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
