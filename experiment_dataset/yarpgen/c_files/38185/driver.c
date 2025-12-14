#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5425449580058604624ULL;
signed char var_7 = (signed char)-64;
unsigned long long int var_10 = 10498417609447271577ULL;
unsigned short var_11 = (unsigned short)44479;
signed char var_17 = (signed char)-44;
int zero = 0;
unsigned int var_20 = 1587443799U;
long long int var_21 = -654112167680069255LL;
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
