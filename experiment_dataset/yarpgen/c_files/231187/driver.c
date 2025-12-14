#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11487583152027292278ULL;
int var_2 = -2115576410;
_Bool var_8 = (_Bool)1;
short var_13 = (short)14679;
signed char var_16 = (signed char)-93;
int zero = 0;
long long int var_19 = 4519996696321215590LL;
signed char var_20 = (signed char)112;
int var_21 = -679181174;
signed char var_22 = (signed char)109;
void init() {
}

void checksum() {
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
