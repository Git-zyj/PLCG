#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)54146;
unsigned short var_10 = (unsigned short)21800;
long long int var_14 = 7803696742875987744LL;
unsigned short var_15 = (unsigned short)38034;
int zero = 0;
unsigned char var_17 = (unsigned char)137;
signed char var_18 = (signed char)-112;
unsigned char var_19 = (unsigned char)96;
void init() {
}

void checksum() {
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
