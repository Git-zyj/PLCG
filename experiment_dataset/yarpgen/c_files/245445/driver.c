#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)109;
signed char var_5 = (signed char)-42;
unsigned short var_6 = (unsigned short)15463;
int zero = 0;
unsigned long long int var_12 = 8980854331640199818ULL;
unsigned short var_13 = (unsigned short)24854;
unsigned long long int var_14 = 5265493610579339187ULL;
void init() {
}

void checksum() {
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
