#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)112;
long long int var_3 = 7637132543400482932LL;
long long int var_4 = -3711643707728716227LL;
long long int var_5 = -7943870724726998964LL;
unsigned int var_7 = 3548132521U;
unsigned char var_10 = (unsigned char)226;
signed char var_11 = (signed char)34;
_Bool var_15 = (_Bool)0;
unsigned short var_18 = (unsigned short)11886;
int zero = 0;
unsigned int var_20 = 79474755U;
short var_21 = (short)-28799;
unsigned short var_22 = (unsigned short)15200;
void init() {
}

void checksum() {
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
