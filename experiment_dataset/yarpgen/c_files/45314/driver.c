#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 37724813;
unsigned int var_6 = 3932754664U;
int var_10 = -1799114044;
signed char var_11 = (signed char)115;
signed char var_12 = (signed char)-44;
unsigned long long int var_14 = 4457574304120969475ULL;
int zero = 0;
unsigned int var_15 = 1558529020U;
unsigned char var_16 = (unsigned char)10;
long long int var_17 = -3712470040771789319LL;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-60;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
