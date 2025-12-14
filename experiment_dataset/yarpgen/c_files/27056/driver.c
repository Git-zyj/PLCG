#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1580049752;
int var_3 = 792261932;
short var_4 = (short)24137;
int var_9 = 1577886321;
int var_10 = -71748431;
signed char var_11 = (signed char)-125;
short var_12 = (short)-5973;
signed char var_16 = (signed char)85;
int zero = 0;
signed char var_18 = (signed char)51;
signed char var_19 = (signed char)-47;
unsigned short var_20 = (unsigned short)60190;
unsigned int var_21 = 558385413U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
