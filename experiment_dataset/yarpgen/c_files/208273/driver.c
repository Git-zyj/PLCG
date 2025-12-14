#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)2989;
long long int var_4 = 7598126420823682856LL;
signed char var_5 = (signed char)91;
unsigned short var_9 = (unsigned short)57671;
unsigned short var_12 = (unsigned short)34158;
int var_14 = -495268170;
int zero = 0;
unsigned short var_16 = (unsigned short)19916;
long long int var_17 = 3322752737811282778LL;
int var_18 = -599644601;
long long int var_19 = 4595448293333562291LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
