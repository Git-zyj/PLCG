#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)128;
unsigned char var_4 = (unsigned char)201;
unsigned char var_5 = (unsigned char)25;
unsigned char var_8 = (unsigned char)58;
unsigned char var_9 = (unsigned char)116;
unsigned long long int var_10 = 6594260794143645672ULL;
unsigned long long int var_14 = 3076658134902181422ULL;
unsigned long long int var_17 = 11241902038411895174ULL;
int zero = 0;
unsigned long long int var_18 = 3505613828651069846ULL;
signed char var_19 = (signed char)-78;
void init() {
}

void checksum() {
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
