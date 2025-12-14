#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
int var_1 = 1358840487;
unsigned short var_2 = (unsigned short)34481;
unsigned long long int var_3 = 5875862942289904525ULL;
unsigned long long int var_11 = 5171736758963825044ULL;
unsigned char var_12 = (unsigned char)126;
long long int var_15 = 7287010225541879361LL;
int zero = 0;
unsigned long long int var_19 = 8814252739692891790ULL;
unsigned char var_20 = (unsigned char)240;
unsigned long long int var_21 = 6515273115559634404ULL;
short var_22 = (short)29490;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
