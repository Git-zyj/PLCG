#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)28;
unsigned long long int var_2 = 14391452123731936742ULL;
unsigned long long int var_3 = 3823298438814665159ULL;
unsigned int var_5 = 4198716117U;
unsigned int var_6 = 2277901933U;
_Bool var_7 = (_Bool)0;
long long int var_10 = -4501264763620824185LL;
int zero = 0;
unsigned short var_11 = (unsigned short)12891;
unsigned short var_12 = (unsigned short)4314;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
