#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 360667788076745125ULL;
unsigned long long int var_5 = 1747970314880934430ULL;
unsigned char var_9 = (unsigned char)202;
unsigned short var_10 = (unsigned short)47832;
long long int var_11 = 5518756767824457936LL;
unsigned char var_13 = (unsigned char)96;
int var_15 = 224456447;
int var_16 = -1730702602;
unsigned int var_17 = 3136764258U;
unsigned long long int var_18 = 7902913621160261624ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)12839;
long long int var_20 = 2289979890051825145LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
