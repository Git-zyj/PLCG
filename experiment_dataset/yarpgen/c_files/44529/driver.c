#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)96;
int var_3 = 1625881111;
short var_4 = (short)31196;
unsigned short var_7 = (unsigned short)31371;
long long int var_10 = -3949813199098126721LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 12237460657270052297ULL;
unsigned long long int var_18 = 18194333717298001996ULL;
unsigned int var_19 = 2166872516U;
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
