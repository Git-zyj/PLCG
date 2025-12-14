#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2583250701U;
unsigned char var_1 = (unsigned char)131;
short var_2 = (short)11094;
short var_3 = (short)26559;
short var_5 = (short)-17108;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-8557;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_10 = (short)-29204;
unsigned long long int var_11 = 14159559012875833851ULL;
unsigned short var_12 = (unsigned short)27889;
long long int var_13 = -5269206410631005519LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
