#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12719130405589610069ULL;
signed char var_2 = (signed char)19;
unsigned short var_3 = (unsigned short)1863;
short var_4 = (short)-10152;
long long int var_7 = -4196572173531539776LL;
int zero = 0;
short var_11 = (short)14535;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-9320;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
