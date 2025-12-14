#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16606;
unsigned char var_3 = (unsigned char)130;
long long int var_4 = 4000156360342461102LL;
unsigned char var_5 = (unsigned char)235;
unsigned char var_6 = (unsigned char)253;
unsigned char var_7 = (unsigned char)185;
unsigned short var_9 = (unsigned short)15960;
int zero = 0;
long long int var_10 = 5970391351085047980LL;
long long int var_11 = 361478583137866098LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
