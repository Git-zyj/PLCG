#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-5225;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
signed char var_12 = (signed char)44;
long long int var_13 = 495521735144011126LL;
unsigned long long int var_18 = 14012304004999759759ULL;
int zero = 0;
short var_19 = (short)6849;
unsigned int var_20 = 2011112726U;
signed char var_21 = (signed char)119;
unsigned int var_22 = 4281701291U;
short var_23 = (short)4143;
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
