#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51470;
unsigned char var_1 = (unsigned char)192;
unsigned short var_4 = (unsigned short)59289;
unsigned long long int var_6 = 8673679479276471063ULL;
signed char var_10 = (signed char)-44;
int zero = 0;
signed char var_13 = (signed char)7;
unsigned char var_14 = (unsigned char)153;
int var_15 = 505829580;
void init() {
}

void checksum() {
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
