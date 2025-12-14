#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6304075607679988517LL;
long long int var_6 = 1725365724137805720LL;
unsigned short var_8 = (unsigned short)6781;
long long int var_12 = -5028109047222855077LL;
unsigned short var_13 = (unsigned short)2624;
unsigned short var_16 = (unsigned short)55877;
int zero = 0;
signed char var_18 = (signed char)-49;
signed char var_19 = (signed char)105;
signed char var_20 = (signed char)123;
unsigned short var_21 = (unsigned short)34759;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
