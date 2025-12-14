#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 517934487735884176ULL;
long long int var_5 = 7196386871933730813LL;
short var_7 = (short)4191;
int var_9 = -899222643;
unsigned long long int var_10 = 5148572263717365629ULL;
signed char var_12 = (signed char)-11;
signed char var_16 = (signed char)91;
signed char var_17 = (signed char)21;
unsigned int var_18 = 2415911740U;
int var_19 = 775494933;
int zero = 0;
int var_20 = 992048910;
unsigned short var_21 = (unsigned short)33963;
unsigned int var_22 = 4160263532U;
unsigned char var_23 = (unsigned char)203;
short var_24 = (short)-20798;
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
