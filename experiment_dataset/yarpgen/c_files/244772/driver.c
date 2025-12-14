#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)69;
unsigned short var_5 = (unsigned short)3776;
unsigned long long int var_8 = 15047853184248354091ULL;
_Bool var_9 = (_Bool)1;
long long int var_12 = 3797713979750605490LL;
unsigned char var_13 = (unsigned char)30;
int zero = 0;
long long int var_14 = -8493341077828743324LL;
unsigned char var_15 = (unsigned char)143;
unsigned long long int var_16 = 372787081521119469ULL;
unsigned long long int var_17 = 13525986625392730536ULL;
unsigned int var_18 = 934275387U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
