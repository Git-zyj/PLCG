#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-15175;
int var_4 = 1980617937;
short var_6 = (short)9708;
short var_7 = (short)-603;
short var_9 = (short)4219;
_Bool var_13 = (_Bool)0;
short var_15 = (short)-24168;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)3786;
short var_19 = (short)21457;
short var_20 = (short)-6733;
unsigned char var_21 = (unsigned char)81;
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
