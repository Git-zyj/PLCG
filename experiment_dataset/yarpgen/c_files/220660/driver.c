#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)253;
signed char var_8 = (signed char)67;
long long int var_11 = -4461167568406585236LL;
unsigned char var_12 = (unsigned char)114;
signed char var_13 = (signed char)-79;
unsigned int var_15 = 949443260U;
int zero = 0;
long long int var_20 = -5388588856578039767LL;
unsigned char var_21 = (unsigned char)229;
unsigned char var_22 = (unsigned char)101;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
