#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13301613951410704325ULL;
long long int var_3 = 5918682933090260398LL;
short var_8 = (short)-22843;
unsigned int var_15 = 4051568201U;
unsigned char var_16 = (unsigned char)99;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 3996423906386264641ULL;
short var_20 = (short)-276;
unsigned int var_21 = 4112468506U;
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
