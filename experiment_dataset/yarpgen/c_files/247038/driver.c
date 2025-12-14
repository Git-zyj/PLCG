#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)43524;
long long int var_13 = 5790697716891993134LL;
unsigned long long int var_15 = 13842069611503588282ULL;
unsigned long long int var_17 = 6426140158975618928ULL;
int zero = 0;
signed char var_20 = (signed char)-64;
unsigned char var_21 = (unsigned char)161;
void init() {
}

void checksum() {
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
