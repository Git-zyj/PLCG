#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1244043776;
unsigned char var_8 = (unsigned char)48;
long long int var_11 = 8201372032841199337LL;
unsigned short var_12 = (unsigned short)25877;
unsigned char var_13 = (unsigned char)48;
long long int var_15 = 5593580572051473691LL;
int zero = 0;
long long int var_16 = 3227983485008332108LL;
long long int var_17 = 7345102317006161851LL;
long long int var_18 = 4028366005539232606LL;
unsigned char var_19 = (unsigned char)54;
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
