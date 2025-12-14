#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -456253092;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)89;
signed char var_6 = (signed char)30;
short var_7 = (short)1188;
long long int var_9 = 7344951057644612509LL;
unsigned char var_11 = (unsigned char)243;
int zero = 0;
unsigned short var_12 = (unsigned short)10241;
signed char var_13 = (signed char)-32;
_Bool var_14 = (_Bool)0;
long long int var_15 = -8508010288182913701LL;
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
