#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43690;
unsigned short var_4 = (unsigned short)19583;
unsigned char var_7 = (unsigned char)118;
long long int var_10 = 881635549334216864LL;
unsigned char var_13 = (unsigned char)244;
unsigned char var_15 = (unsigned char)74;
int zero = 0;
unsigned long long int var_20 = 15230284770618579969ULL;
int var_21 = 1625538724;
void init() {
}

void checksum() {
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
