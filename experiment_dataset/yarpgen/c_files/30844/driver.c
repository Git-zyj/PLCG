#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)47;
unsigned int var_2 = 1811931714U;
unsigned int var_4 = 3550430189U;
unsigned short var_6 = (unsigned short)34918;
int var_10 = 219772599;
int zero = 0;
unsigned long long int var_13 = 10748302816500244510ULL;
unsigned char var_14 = (unsigned char)131;
unsigned short var_15 = (unsigned short)63440;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
