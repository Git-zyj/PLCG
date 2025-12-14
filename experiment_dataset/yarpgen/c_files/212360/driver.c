#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7719745966580467024LL;
unsigned long long int var_8 = 4216389781057568753ULL;
unsigned short var_9 = (unsigned short)55481;
unsigned long long int var_15 = 7393842971246678241ULL;
int zero = 0;
short var_18 = (short)-18348;
unsigned char var_19 = (unsigned char)207;
unsigned short var_20 = (unsigned short)7145;
int var_21 = 827644723;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
