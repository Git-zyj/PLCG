#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)169;
unsigned char var_4 = (unsigned char)152;
unsigned int var_10 = 226569278U;
signed char var_11 = (signed char)55;
int zero = 0;
short var_16 = (short)-32671;
short var_17 = (short)-2615;
unsigned int var_18 = 616498122U;
long long int var_19 = 1001045438710130249LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
