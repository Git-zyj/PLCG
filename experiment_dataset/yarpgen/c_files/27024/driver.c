#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2416991143U;
unsigned long long int var_6 = 9133646389613666434ULL;
short var_12 = (short)29489;
unsigned short var_13 = (unsigned short)35138;
unsigned char var_14 = (unsigned char)51;
int zero = 0;
unsigned short var_15 = (unsigned short)54160;
unsigned long long int var_16 = 9013494466387996067ULL;
signed char var_17 = (signed char)58;
signed char var_18 = (signed char)-16;
unsigned char var_19 = (unsigned char)234;
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
