#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8397757168678051140LL;
unsigned int var_3 = 3235506458U;
unsigned char var_4 = (unsigned char)175;
unsigned short var_10 = (unsigned short)4840;
unsigned char var_17 = (unsigned char)192;
int zero = 0;
unsigned int var_18 = 1817678059U;
unsigned long long int var_19 = 2516459390892399476ULL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 2844688044633476409ULL;
long long int var_22 = -7688664584982138391LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
