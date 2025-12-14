#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)179;
short var_1 = (short)7289;
long long int var_2 = -4925882119686879884LL;
signed char var_3 = (signed char)-96;
unsigned short var_4 = (unsigned short)63153;
unsigned long long int var_9 = 483667965659184870ULL;
short var_10 = (short)13280;
int zero = 0;
unsigned long long int var_13 = 392335028855783619ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
