#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25842;
unsigned short var_4 = (unsigned short)60789;
unsigned int var_10 = 3738370120U;
int zero = 0;
short var_12 = (short)-25649;
long long int var_13 = 5685230603765189368LL;
unsigned short var_14 = (unsigned short)62829;
unsigned char var_15 = (unsigned char)201;
unsigned long long int var_16 = 13415466812104678637ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
