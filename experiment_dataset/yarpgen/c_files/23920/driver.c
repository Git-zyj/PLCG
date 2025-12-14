#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7285082026495997759LL;
unsigned int var_1 = 664940799U;
short var_5 = (short)7318;
unsigned short var_6 = (unsigned short)45022;
long long int var_7 = 4568623499104698516LL;
unsigned int var_13 = 2159642721U;
unsigned short var_14 = (unsigned short)28839;
long long int var_15 = 528952636806830625LL;
int zero = 0;
short var_17 = (short)-5585;
unsigned int var_18 = 3355636092U;
unsigned short var_19 = (unsigned short)63680;
signed char var_20 = (signed char)-18;
unsigned int var_21 = 1285117138U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
