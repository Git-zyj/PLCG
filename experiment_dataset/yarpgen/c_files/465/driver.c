#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5228347272578672717LL;
unsigned char var_3 = (unsigned char)53;
unsigned char var_4 = (unsigned char)20;
unsigned char var_8 = (unsigned char)215;
unsigned long long int var_9 = 6505672926725965141ULL;
unsigned short var_10 = (unsigned short)53717;
unsigned short var_12 = (unsigned short)35313;
unsigned short var_14 = (unsigned short)525;
int zero = 0;
unsigned short var_16 = (unsigned short)25486;
unsigned char var_17 = (unsigned char)24;
void init() {
}

void checksum() {
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
