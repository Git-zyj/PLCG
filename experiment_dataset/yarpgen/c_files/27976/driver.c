#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1617431462638260302LL;
unsigned long long int var_1 = 12226439548532333257ULL;
signed char var_10 = (signed char)85;
unsigned int var_11 = 272446238U;
unsigned short var_16 = (unsigned short)61949;
int zero = 0;
unsigned short var_17 = (unsigned short)39634;
long long int var_18 = -6555657234487876564LL;
long long int var_19 = 6341212168543279871LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
