#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1685266636456261595ULL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 2414281907482859063ULL;
unsigned short var_6 = (unsigned short)29500;
unsigned long long int var_9 = 9151558205000491410ULL;
unsigned long long int var_10 = 11939902584683532190ULL;
unsigned int var_12 = 2011591619U;
unsigned long long int var_13 = 9101593153699455173ULL;
signed char var_15 = (signed char)105;
long long int var_16 = -5162898765247706187LL;
int zero = 0;
signed char var_17 = (signed char)-10;
unsigned long long int var_18 = 6459713318984534645ULL;
void init() {
}

void checksum() {
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
