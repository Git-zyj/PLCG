#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10590;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned long long int var_7 = 1378644588622126185ULL;
signed char var_9 = (signed char)-121;
unsigned long long int var_10 = 10538071133604740878ULL;
short var_12 = (short)-29117;
int zero = 0;
short var_16 = (short)-6878;
signed char var_17 = (signed char)-87;
long long int var_18 = 5491287704036468066LL;
signed char var_19 = (signed char)40;
signed char var_20 = (signed char)48;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
