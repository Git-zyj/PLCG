#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2013968665;
signed char var_1 = (signed char)-72;
signed char var_2 = (signed char)47;
long long int var_3 = -6991373388709347925LL;
_Bool var_5 = (_Bool)0;
int var_10 = 2028560959;
unsigned int var_12 = 800619868U;
int zero = 0;
long long int var_16 = -6683614391102483981LL;
int var_17 = 1305028052;
_Bool var_18 = (_Bool)0;
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
