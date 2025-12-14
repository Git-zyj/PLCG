#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)0;
short var_6 = (short)20524;
signed char var_7 = (signed char)-111;
long long int var_9 = -4358490101479186974LL;
unsigned int var_10 = 3578533618U;
long long int var_12 = 2113237188759607642LL;
signed char var_14 = (signed char)-30;
unsigned short var_15 = (unsigned short)34312;
int zero = 0;
unsigned short var_16 = (unsigned short)47465;
unsigned char var_17 = (unsigned char)78;
unsigned long long int var_18 = 12123014830181373362ULL;
unsigned char var_19 = (unsigned char)115;
int var_20 = 758074139;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
