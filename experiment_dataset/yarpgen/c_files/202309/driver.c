#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28893;
short var_2 = (short)32038;
long long int var_3 = 5575081265882720788LL;
signed char var_4 = (signed char)112;
unsigned long long int var_9 = 12121074816557031290ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)4539;
unsigned short var_12 = (unsigned short)26503;
unsigned char var_13 = (unsigned char)7;
long long int var_14 = 3895673239158114353LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
