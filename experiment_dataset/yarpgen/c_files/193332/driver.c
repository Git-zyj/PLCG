#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46261;
unsigned short var_5 = (unsigned short)59917;
unsigned short var_10 = (unsigned short)20682;
int zero = 0;
short var_19 = (short)-20053;
signed char var_20 = (signed char)-10;
unsigned char var_21 = (unsigned char)245;
void init() {
}

void checksum() {
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
