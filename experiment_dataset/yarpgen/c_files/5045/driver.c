#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)103;
signed char var_3 = (signed char)-126;
unsigned short var_6 = (unsigned short)62398;
unsigned short var_7 = (unsigned short)55333;
signed char var_10 = (signed char)24;
int zero = 0;
int var_11 = 1751732477;
long long int var_12 = 3513389200315477516LL;
signed char var_13 = (signed char)117;
unsigned char var_14 = (unsigned char)57;
long long int var_15 = -4244793969981430545LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
