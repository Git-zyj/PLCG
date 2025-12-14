#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1176146911U;
unsigned long long int var_2 = 1192974960677430366ULL;
unsigned long long int var_4 = 1866505030797828143ULL;
unsigned int var_5 = 852727979U;
int var_6 = -1986529544;
int var_13 = -384608941;
unsigned int var_14 = 3304017700U;
int var_15 = -1868299809;
long long int var_17 = 6764448262919776026LL;
short var_18 = (short)-24131;
int zero = 0;
unsigned char var_19 = (unsigned char)123;
unsigned int var_20 = 2934042236U;
int var_21 = 1057222173;
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
