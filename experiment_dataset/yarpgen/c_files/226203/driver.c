#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 254461007;
unsigned short var_2 = (unsigned short)7688;
unsigned char var_6 = (unsigned char)102;
unsigned long long int var_11 = 18406509126153748174ULL;
int zero = 0;
int var_14 = 900009017;
long long int var_15 = -533958232035112566LL;
unsigned int var_16 = 1174175519U;
signed char var_17 = (signed char)-24;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
