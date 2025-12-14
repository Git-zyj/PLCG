#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-124;
unsigned short var_1 = (unsigned short)32389;
int var_3 = -1114133888;
long long int var_10 = 353566030321521544LL;
signed char var_14 = (signed char)10;
unsigned char var_17 = (unsigned char)81;
int zero = 0;
unsigned long long int var_19 = 13069512002900244718ULL;
long long int var_20 = -639701674422473431LL;
long long int var_21 = -2408865555767931523LL;
void init() {
}

void checksum() {
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
