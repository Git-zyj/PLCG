#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8389011155989242204LL;
signed char var_3 = (signed char)81;
long long int var_5 = -7489412019669389088LL;
unsigned long long int var_9 = 15202350492479665275ULL;
int var_10 = 180583377;
short var_12 = (short)-16488;
int zero = 0;
unsigned short var_14 = (unsigned short)57461;
signed char var_15 = (signed char)-104;
unsigned long long int var_16 = 5138884001080477640ULL;
long long int var_17 = 4961012531275973894LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
