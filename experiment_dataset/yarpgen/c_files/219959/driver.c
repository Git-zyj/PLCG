#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)29013;
unsigned short var_10 = (unsigned short)20889;
short var_14 = (short)-21694;
int zero = 0;
short var_19 = (short)8385;
unsigned char var_20 = (unsigned char)232;
long long int var_21 = 5329624467579479110LL;
void init() {
}

void checksum() {
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
