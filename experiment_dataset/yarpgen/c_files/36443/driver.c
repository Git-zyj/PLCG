#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-105;
signed char var_6 = (signed char)-20;
unsigned int var_7 = 1802154849U;
unsigned short var_8 = (unsigned short)17923;
int zero = 0;
signed char var_10 = (signed char)-53;
long long int var_11 = 8158799172584104696LL;
signed char var_12 = (signed char)22;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
