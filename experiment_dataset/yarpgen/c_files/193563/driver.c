#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15087136787736326314ULL;
int var_3 = 1138461772;
unsigned char var_5 = (unsigned char)129;
int zero = 0;
short var_16 = (short)20671;
unsigned long long int var_17 = 9278510364673058745ULL;
unsigned short var_18 = (unsigned short)50533;
signed char var_19 = (signed char)90;
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
