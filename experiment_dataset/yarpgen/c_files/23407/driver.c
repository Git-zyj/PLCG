#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)192;
long long int var_4 = -4667467979498176821LL;
signed char var_10 = (signed char)-124;
unsigned int var_12 = 1623377358U;
int zero = 0;
unsigned long long int var_13 = 5381316645031242274ULL;
unsigned short var_14 = (unsigned short)53155;
void init() {
}

void checksum() {
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
