#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -6977206734504612159LL;
unsigned int var_3 = 2924050711U;
signed char var_6 = (signed char)-112;
signed char var_8 = (signed char)81;
short var_9 = (short)9168;
unsigned long long int var_10 = 11646261818176030804ULL;
signed char var_14 = (signed char)45;
int zero = 0;
unsigned char var_17 = (unsigned char)38;
unsigned int var_18 = 1295007004U;
unsigned char var_19 = (unsigned char)161;
void init() {
}

void checksum() {
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
