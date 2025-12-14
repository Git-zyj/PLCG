#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3527197547U;
unsigned long long int var_3 = 7005871670880122034ULL;
unsigned long long int var_6 = 7377071253597016562ULL;
unsigned long long int var_7 = 5744128261037486409ULL;
_Bool var_9 = (_Bool)0;
long long int var_10 = -568034452963520303LL;
unsigned long long int var_13 = 12041479734716216674ULL;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 11226328515409913280ULL;
int zero = 0;
unsigned int var_20 = 3001969110U;
unsigned short var_21 = (unsigned short)64375;
unsigned long long int var_22 = 15151720814336664138ULL;
void init() {
}

void checksum() {
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
