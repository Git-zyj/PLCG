#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_4 = (signed char)104;
unsigned short var_7 = (unsigned short)4060;
signed char var_13 = (signed char)39;
unsigned int var_14 = 1306331534U;
int zero = 0;
signed char var_15 = (signed char)-106;
unsigned int var_16 = 1365796601U;
long long int var_17 = 1154310325151782238LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
