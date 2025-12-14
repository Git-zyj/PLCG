#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3531;
unsigned int var_4 = 2103180794U;
unsigned int var_7 = 3841938237U;
signed char var_8 = (signed char)-56;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-99;
int zero = 0;
long long int var_11 = 633382713251181221LL;
signed char var_12 = (signed char)-55;
signed char var_13 = (signed char)104;
void init() {
}

void checksum() {
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
