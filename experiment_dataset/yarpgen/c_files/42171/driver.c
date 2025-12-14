#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3635579557U;
unsigned int var_4 = 2524390438U;
signed char var_5 = (signed char)-122;
unsigned long long int var_6 = 6446383236977073279ULL;
short var_8 = (short)-2304;
short var_11 = (short)-12981;
unsigned long long int var_12 = 15540667843032042979ULL;
long long int var_13 = 4358992579078204855LL;
int zero = 0;
unsigned char var_15 = (unsigned char)124;
long long int var_16 = -8500143496569083010LL;
void init() {
}

void checksum() {
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
