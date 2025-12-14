#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)89;
long long int var_3 = 3704216442775783109LL;
_Bool var_4 = (_Bool)0;
unsigned short var_8 = (unsigned short)34958;
int zero = 0;
long long int var_10 = -6434770608157385737LL;
unsigned char var_11 = (unsigned char)133;
unsigned char var_12 = (unsigned char)12;
unsigned char var_13 = (unsigned char)245;
long long int var_14 = -4045353599427506119LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
