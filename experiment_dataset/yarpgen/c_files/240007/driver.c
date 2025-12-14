#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2074304029U;
long long int var_6 = -3673331097171625081LL;
unsigned long long int var_7 = 17869448809629378549ULL;
short var_10 = (short)28892;
int zero = 0;
long long int var_19 = 5140318760783619818LL;
unsigned short var_20 = (unsigned short)13565;
unsigned short var_21 = (unsigned short)19897;
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
