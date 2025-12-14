#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3594;
unsigned int var_6 = 4127110586U;
int var_8 = 92653779;
unsigned long long int var_10 = 4699227192027358130ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 4209483616836913488ULL;
signed char var_21 = (signed char)-13;
int var_22 = -1357532045;
unsigned long long int var_23 = 1637325156659915838ULL;
unsigned short var_24 = (unsigned short)52223;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
