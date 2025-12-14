#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)39;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 10680739969656009909ULL;
unsigned short var_3 = (unsigned short)49539;
unsigned int var_5 = 2735393567U;
short var_6 = (short)8854;
unsigned int var_7 = 4026228301U;
signed char var_8 = (signed char)-8;
unsigned int var_10 = 1068888502U;
int zero = 0;
long long int var_11 = -8679380286676309082LL;
int var_12 = -698349598;
long long int var_13 = -8419900593107532699LL;
unsigned int var_14 = 2805057839U;
unsigned char var_15 = (unsigned char)17;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
