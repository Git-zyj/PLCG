#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)32403;
long long int var_3 = -4221338099495448467LL;
unsigned short var_11 = (unsigned short)19631;
signed char var_16 = (signed char)120;
int zero = 0;
unsigned char var_17 = (unsigned char)231;
unsigned int var_18 = 333701306U;
unsigned short var_19 = (unsigned short)64125;
void init() {
}

void checksum() {
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
