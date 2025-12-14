#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13321379814330291204ULL;
short var_8 = (short)19130;
unsigned int var_10 = 3857313138U;
unsigned char var_11 = (unsigned char)166;
unsigned long long int var_13 = 14559090033694496234ULL;
long long int var_14 = 7883103656310160946LL;
int zero = 0;
signed char var_15 = (signed char)-60;
unsigned char var_16 = (unsigned char)7;
int var_17 = 724609481;
unsigned char var_18 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
