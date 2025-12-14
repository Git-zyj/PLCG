#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29009;
unsigned long long int var_2 = 6479831113940504134ULL;
unsigned char var_9 = (unsigned char)250;
unsigned long long int var_10 = 18190681119373240567ULL;
unsigned long long int var_11 = 14478343545339759147ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)18;
unsigned long long int var_15 = 2057127413408850568ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
