#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-59;
unsigned char var_2 = (unsigned char)176;
unsigned char var_3 = (unsigned char)92;
signed char var_4 = (signed char)-38;
unsigned int var_6 = 3465280789U;
long long int var_7 = 2246321641669622364LL;
int var_8 = -93344508;
_Bool var_11 = (_Bool)1;
int var_12 = -1492961988;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)110;
unsigned char var_17 = (unsigned char)137;
int var_18 = -1301062684;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
