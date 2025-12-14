#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)9;
short var_2 = (short)10067;
unsigned short var_5 = (unsigned short)25861;
long long int var_9 = 3905211703279147435LL;
unsigned char var_12 = (unsigned char)3;
int zero = 0;
signed char var_14 = (signed char)107;
unsigned long long int var_15 = 16826580506862752295ULL;
short var_16 = (short)-20851;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
