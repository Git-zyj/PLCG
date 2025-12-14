#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)1116;
unsigned long long int var_6 = 13687296863347560768ULL;
long long int var_7 = -8305577114754842000LL;
unsigned char var_9 = (unsigned char)145;
unsigned char var_10 = (unsigned char)242;
unsigned char var_16 = (unsigned char)17;
int zero = 0;
unsigned short var_17 = (unsigned short)23773;
unsigned char var_18 = (unsigned char)240;
int var_19 = 1205160550;
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
