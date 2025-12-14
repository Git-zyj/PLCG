#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19901;
unsigned char var_2 = (unsigned char)28;
_Bool var_3 = (_Bool)0;
long long int var_4 = 3112807334700948356LL;
signed char var_5 = (signed char)53;
unsigned char var_6 = (unsigned char)137;
unsigned short var_8 = (unsigned short)3835;
long long int var_9 = 4971997345301846257LL;
signed char var_10 = (signed char)-58;
unsigned int var_12 = 4199710840U;
unsigned long long int var_15 = 13901705705656711337ULL;
int zero = 0;
unsigned int var_19 = 918094455U;
signed char var_20 = (signed char)51;
short var_21 = (short)-9532;
unsigned char var_22 = (unsigned char)152;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
