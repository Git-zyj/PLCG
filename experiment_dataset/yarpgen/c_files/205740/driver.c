#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18859;
short var_2 = (short)9571;
unsigned short var_6 = (unsigned short)27851;
unsigned long long int var_7 = 3548161585112947939ULL;
short var_9 = (short)6270;
unsigned long long int var_11 = 15749914881634584258ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)14912;
unsigned long long int var_17 = 13963042510844484529ULL;
int var_18 = 1181591762;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
