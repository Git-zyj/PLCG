#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-83;
long long int var_3 = 2453657041845758506LL;
signed char var_8 = (signed char)-113;
signed char var_10 = (signed char)72;
unsigned short var_12 = (unsigned short)59172;
unsigned short var_13 = (unsigned short)25891;
int zero = 0;
int var_18 = 1602248111;
signed char var_19 = (signed char)-1;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 11678006647199176287ULL;
void init() {
}

void checksum() {
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
