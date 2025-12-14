#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21188;
signed char var_1 = (signed char)125;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)48495;
int var_4 = -1685451565;
short var_5 = (short)-18528;
long long int var_6 = 3184764962275762506LL;
long long int var_7 = -4660680018292934040LL;
int var_9 = 279529457;
unsigned long long int var_10 = 11651881713502462996ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 12594550592652922067ULL;
long long int var_13 = 4338800647653019993LL;
unsigned short var_14 = (unsigned short)35370;
unsigned long long int var_15 = 17211017841674116107ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
