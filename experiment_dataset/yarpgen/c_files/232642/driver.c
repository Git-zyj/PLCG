#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-59;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
short var_10 = (short)-8524;
unsigned short var_12 = (unsigned short)9914;
int zero = 0;
signed char var_15 = (signed char)-8;
signed char var_16 = (signed char)-18;
unsigned long long int var_17 = 7947899828863689220ULL;
unsigned short var_18 = (unsigned short)494;
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
