#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)3;
unsigned char var_2 = (unsigned char)183;
unsigned short var_6 = (unsigned short)26529;
long long int var_7 = 6020959232878668188LL;
unsigned int var_8 = 4006531710U;
signed char var_9 = (signed char)27;
unsigned int var_14 = 1452531246U;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = 8083303035279473880LL;
int var_18 = 1078912445;
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
