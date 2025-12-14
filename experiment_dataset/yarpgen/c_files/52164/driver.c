#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-41;
short var_11 = (short)28779;
signed char var_16 = (signed char)-102;
int zero = 0;
unsigned char var_18 = (unsigned char)242;
unsigned long long int var_19 = 12982275088576303025ULL;
unsigned char var_20 = (unsigned char)111;
unsigned long long int var_21 = 9652537473231781325ULL;
signed char var_22 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
