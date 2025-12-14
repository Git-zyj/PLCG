#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-42;
unsigned short var_5 = (unsigned short)59774;
unsigned int var_8 = 2169296348U;
long long int var_15 = 4067157516561100947LL;
int zero = 0;
unsigned long long int var_17 = 12183841305491099177ULL;
signed char var_18 = (signed char)-118;
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
