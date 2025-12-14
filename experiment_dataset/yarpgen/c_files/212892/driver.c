#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-30344;
long long int var_7 = -186207553813512419LL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)45826;
int var_11 = -926502453;
unsigned long long int var_14 = 5110814293821450167ULL;
int var_16 = 1911317420;
int zero = 0;
long long int var_17 = 9145224670212369335LL;
unsigned char var_18 = (unsigned char)37;
long long int var_19 = 8016797640348107106LL;
int var_20 = 1648130930;
unsigned long long int var_21 = 11339085326441702013ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
