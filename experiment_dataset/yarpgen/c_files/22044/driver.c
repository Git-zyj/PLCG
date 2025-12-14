#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7472203548609785484LL;
unsigned char var_5 = (unsigned char)138;
unsigned long long int var_9 = 17009104260486183222ULL;
int var_10 = 1791449229;
int zero = 0;
signed char var_15 = (signed char)-80;
int var_16 = 1978839132;
short var_17 = (short)-5625;
unsigned char var_18 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
