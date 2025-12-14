#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)2;
unsigned short var_7 = (unsigned short)18609;
signed char var_9 = (signed char)-94;
unsigned long long int var_11 = 9847726268355282224ULL;
unsigned long long int var_14 = 9070747428925463564ULL;
int zero = 0;
unsigned long long int var_15 = 1183690536024299856ULL;
unsigned short var_16 = (unsigned short)57567;
long long int var_17 = -5363184202407707878LL;
void init() {
}

void checksum() {
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
