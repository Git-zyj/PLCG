#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2336;
short var_3 = (short)25752;
signed char var_4 = (signed char)73;
_Bool var_5 = (_Bool)1;
int var_6 = 1974700480;
signed char var_7 = (signed char)105;
unsigned char var_9 = (unsigned char)194;
short var_12 = (short)-715;
long long int var_13 = -2445388221954664022LL;
long long int var_14 = -3817535675411011436LL;
int zero = 0;
unsigned short var_15 = (unsigned short)20170;
int var_16 = -1004654211;
long long int var_17 = -2463703964039623910LL;
unsigned char var_18 = (unsigned char)163;
unsigned char var_19 = (unsigned char)130;
unsigned short var_20 = (unsigned short)28397;
short var_21 = (short)-9465;
signed char var_22 = (signed char)-26;
int var_23 = 2071878482;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
