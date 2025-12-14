#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2293601610U;
long long int var_3 = -6451682016779805549LL;
int var_7 = -1521191172;
long long int var_18 = 5565823478849996373LL;
int zero = 0;
signed char var_20 = (signed char)108;
short var_21 = (short)22725;
long long int var_22 = 4026977805616627702LL;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
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
