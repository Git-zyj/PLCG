#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)223;
long long int var_1 = -3147045639681089772LL;
int var_2 = 138708360;
signed char var_4 = (signed char)-111;
signed char var_5 = (signed char)21;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)0;
int var_9 = 1604668673;
int var_12 = -1751704056;
int var_14 = -1364638570;
int var_16 = 618199776;
int var_17 = -1507474964;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = 522829760;
int var_20 = 1529890539;
int var_21 = 380679398;
unsigned char var_22 = (unsigned char)14;
signed char var_23 = (signed char)-75;
void init() {
}

void checksum() {
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
