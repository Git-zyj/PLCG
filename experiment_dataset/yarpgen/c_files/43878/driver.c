#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61810;
unsigned short var_1 = (unsigned short)45753;
unsigned long long int var_2 = 13760177788067879304ULL;
long long int var_5 = 2112366959424773758LL;
unsigned short var_6 = (unsigned short)25937;
int zero = 0;
unsigned short var_10 = (unsigned short)739;
unsigned long long int var_11 = 12238717546808202731ULL;
signed char var_12 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
