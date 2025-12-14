#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 417508876568163984LL;
long long int var_10 = 8446771656670460132LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 17200097850452477489ULL;
signed char var_20 = (signed char)71;
signed char var_21 = (signed char)34;
unsigned char var_22 = (unsigned char)176;
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
