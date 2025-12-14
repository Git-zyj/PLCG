#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2174129036U;
long long int var_4 = -8270769163161749053LL;
long long int var_5 = 8428653003722243412LL;
unsigned char var_6 = (unsigned char)10;
unsigned char var_7 = (unsigned char)42;
signed char var_10 = (signed char)-37;
int zero = 0;
unsigned long long int var_15 = 960656803162018839ULL;
long long int var_16 = 3860578353365211691LL;
short var_17 = (short)17209;
unsigned char var_18 = (unsigned char)7;
signed char var_19 = (signed char)82;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
