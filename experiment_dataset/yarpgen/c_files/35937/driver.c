#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61485;
long long int var_2 = -687341260868042853LL;
int var_4 = 1954509591;
unsigned int var_5 = 2799952031U;
unsigned char var_6 = (unsigned char)38;
int var_10 = 472693238;
int zero = 0;
signed char var_13 = (signed char)116;
long long int var_14 = -6798397031540634942LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
