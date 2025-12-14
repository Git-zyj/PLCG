#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -337781189;
unsigned short var_7 = (unsigned short)8984;
short var_8 = (short)27313;
short var_10 = (short)17929;
int var_11 = 281407990;
_Bool var_13 = (_Bool)0;
signed char var_17 = (signed char)-41;
int zero = 0;
unsigned int var_19 = 1104888103U;
unsigned long long int var_20 = 13857121690034739898ULL;
long long int var_21 = -5084041566794227375LL;
void init() {
}

void checksum() {
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
