#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3501701964U;
short var_2 = (short)-3594;
signed char var_3 = (signed char)-51;
unsigned long long int var_5 = 5203823726295681878ULL;
signed char var_12 = (signed char)83;
signed char var_13 = (signed char)-28;
int var_15 = -1230743229;
int zero = 0;
int var_16 = -662520723;
unsigned int var_17 = 2858175077U;
short var_18 = (short)14385;
unsigned long long int var_19 = 14096859616355615860ULL;
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
