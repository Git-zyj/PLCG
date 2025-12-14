#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28722;
short var_4 = (short)-25320;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)26657;
long long int var_11 = -7661538740522873322LL;
signed char var_13 = (signed char)-7;
int zero = 0;
unsigned short var_17 = (unsigned short)44679;
int var_18 = -774209338;
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
