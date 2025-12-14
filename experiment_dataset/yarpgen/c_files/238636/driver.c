#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)24;
signed char var_6 = (signed char)-1;
signed char var_7 = (signed char)-117;
signed char var_9 = (signed char)-52;
signed char var_10 = (signed char)-95;
unsigned long long int var_13 = 732351308783390218ULL;
int zero = 0;
unsigned long long int var_15 = 6461394621357270706ULL;
signed char var_16 = (signed char)-20;
signed char var_17 = (signed char)44;
unsigned long long int var_18 = 4828787721362722890ULL;
signed char var_19 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
