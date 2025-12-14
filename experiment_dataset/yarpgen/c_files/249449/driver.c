#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)111;
int var_4 = 1467948138;
signed char var_5 = (signed char)-125;
long long int var_6 = -2669929990432049115LL;
long long int var_9 = 253141933392625154LL;
signed char var_10 = (signed char)93;
unsigned char var_11 = (unsigned char)224;
short var_13 = (short)6183;
int var_14 = 668986695;
signed char var_15 = (signed char)10;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -6130815567095587218LL;
long long int var_20 = 3272587776248869071LL;
long long int var_21 = 5772326702164054021LL;
void init() {
}

void checksum() {
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
