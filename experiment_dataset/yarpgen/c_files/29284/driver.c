#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1465153850U;
int var_3 = -1241609339;
unsigned long long int var_5 = 5688149729107247307ULL;
int var_10 = 189217053;
unsigned short var_11 = (unsigned short)64878;
long long int var_12 = -8629929866798652057LL;
int var_13 = -674658645;
signed char var_14 = (signed char)30;
int zero = 0;
unsigned long long int var_16 = 1494214154136575587ULL;
int var_17 = 156279814;
long long int var_18 = -7412488092652383178LL;
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
