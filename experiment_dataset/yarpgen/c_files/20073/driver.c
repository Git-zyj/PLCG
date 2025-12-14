#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2840490791U;
unsigned int var_4 = 3151390312U;
unsigned int var_6 = 2146415956U;
signed char var_8 = (signed char)30;
unsigned int var_9 = 960109435U;
signed char var_12 = (signed char)-80;
unsigned int var_14 = 2467531939U;
short var_16 = (short)14444;
int zero = 0;
int var_18 = 920562642;
unsigned long long int var_19 = 817757571892631989ULL;
unsigned int var_20 = 2044929322U;
unsigned long long int var_21 = 14704667359152742668ULL;
long long int var_22 = 6630427085844386887LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
