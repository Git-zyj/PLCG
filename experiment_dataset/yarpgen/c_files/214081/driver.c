#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3324419434218151965LL;
long long int var_2 = 8830396150689954919LL;
unsigned char var_3 = (unsigned char)220;
long long int var_5 = 7459650212033055870LL;
long long int var_7 = 6220195270225899755LL;
unsigned char var_10 = (unsigned char)92;
unsigned char var_12 = (unsigned char)223;
short var_14 = (short)-20219;
unsigned short var_15 = (unsigned short)55516;
unsigned short var_16 = (unsigned short)6480;
int zero = 0;
unsigned int var_17 = 1029476889U;
int var_18 = 291745620;
long long int var_19 = 8195575046657143295LL;
unsigned long long int var_20 = 7581057338587568087ULL;
unsigned long long int var_21 = 14404609634660796719ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
