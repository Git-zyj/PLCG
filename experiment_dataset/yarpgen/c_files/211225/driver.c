#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)61;
signed char var_9 = (signed char)-120;
signed char var_10 = (signed char)67;
unsigned long long int var_12 = 5599537559415339832ULL;
unsigned char var_14 = (unsigned char)104;
unsigned char var_15 = (unsigned char)135;
unsigned long long int var_17 = 13422426245295689406ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)66;
signed char var_19 = (signed char)-70;
unsigned short var_20 = (unsigned short)36280;
unsigned long long int var_21 = 12641891940233560003ULL;
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
