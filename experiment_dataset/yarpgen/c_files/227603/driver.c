#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-10698;
unsigned int var_5 = 4204798703U;
unsigned int var_6 = 4065303518U;
unsigned short var_7 = (unsigned short)26061;
long long int var_8 = -8910158918076688699LL;
long long int var_13 = -6636118154391182233LL;
signed char var_14 = (signed char)77;
unsigned long long int var_15 = 12103247176783187802ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2459938219U;
signed char var_18 = (signed char)-73;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
