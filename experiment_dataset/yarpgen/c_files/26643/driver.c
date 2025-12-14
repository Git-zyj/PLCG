#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6826523037209778130ULL;
signed char var_4 = (signed char)-57;
unsigned char var_5 = (unsigned char)201;
unsigned short var_8 = (unsigned short)47117;
unsigned int var_10 = 2455040929U;
long long int var_15 = -2122646364772614814LL;
int zero = 0;
unsigned char var_20 = (unsigned char)90;
unsigned char var_21 = (unsigned char)12;
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
