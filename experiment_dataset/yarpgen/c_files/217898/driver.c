#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -454380119;
int var_6 = 1636797067;
signed char var_8 = (signed char)60;
unsigned short var_10 = (unsigned short)44773;
signed char var_11 = (signed char)112;
unsigned int var_12 = 1166118833U;
int var_17 = -527039428;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 4152499710U;
int zero = 0;
long long int var_20 = 6029769546495407410LL;
int var_21 = 2023837973;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
