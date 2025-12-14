#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16232;
signed char var_1 = (signed char)-44;
signed char var_4 = (signed char)103;
short var_7 = (short)-8754;
unsigned long long int var_10 = 3631602158642042537ULL;
int var_11 = -443649863;
int zero = 0;
unsigned long long int var_13 = 4111212888034141234ULL;
int var_14 = -1732473768;
unsigned short var_15 = (unsigned short)19381;
unsigned int var_16 = 4133630012U;
void init() {
}

void checksum() {
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
