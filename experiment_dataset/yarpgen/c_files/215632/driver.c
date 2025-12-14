#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3350447970482984324ULL;
unsigned int var_11 = 3313881596U;
unsigned int var_16 = 3624816429U;
signed char var_17 = (signed char)-10;
signed char var_18 = (signed char)65;
int zero = 0;
long long int var_20 = -6616914938998573782LL;
short var_21 = (short)32535;
unsigned short var_22 = (unsigned short)63592;
unsigned int var_23 = 2324126464U;
int var_24 = -651147079;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
