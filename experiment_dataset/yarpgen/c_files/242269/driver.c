#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11472379339128700134ULL;
signed char var_4 = (signed char)-14;
signed char var_6 = (signed char)62;
unsigned long long int var_11 = 11977814155752796890ULL;
signed char var_19 = (signed char)49;
int zero = 0;
unsigned int var_20 = 2790081349U;
unsigned short var_21 = (unsigned short)43319;
long long int var_22 = -3721658587891698931LL;
unsigned long long int var_23 = 7370383661045056601ULL;
unsigned int var_24 = 1503516806U;
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
