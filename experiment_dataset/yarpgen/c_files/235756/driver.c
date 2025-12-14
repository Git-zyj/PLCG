#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2116937765U;
_Bool var_1 = (_Bool)1;
short var_2 = (short)24458;
short var_5 = (short)-31622;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 14139496316353468950ULL;
unsigned int var_9 = 4143070259U;
signed char var_11 = (signed char)-77;
signed char var_12 = (signed char)5;
long long int var_14 = -7639936258508883737LL;
int zero = 0;
unsigned int var_16 = 2614731011U;
short var_17 = (short)27526;
_Bool var_18 = (_Bool)1;
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
