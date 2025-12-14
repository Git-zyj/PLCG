#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)172;
unsigned long long int var_4 = 6160054598986667635ULL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3381195691U;
unsigned long long int var_17 = 17909561595289430842ULL;
unsigned int var_19 = 3500774443U;
int zero = 0;
unsigned long long int var_20 = 7246292366598525546ULL;
_Bool var_21 = (_Bool)0;
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
