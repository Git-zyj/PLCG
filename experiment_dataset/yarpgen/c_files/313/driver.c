#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)95;
short var_5 = (short)-17886;
short var_8 = (short)-12790;
long long int var_9 = 5216697789993838578LL;
signed char var_10 = (signed char)10;
unsigned int var_16 = 946036304U;
signed char var_18 = (signed char)71;
int zero = 0;
short var_19 = (short)14289;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-22101;
void init() {
}

void checksum() {
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
