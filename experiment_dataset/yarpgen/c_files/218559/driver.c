#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4082776765U;
int var_6 = 1032321828;
int var_7 = 909392741;
int var_11 = 1267201590;
unsigned long long int var_12 = 8687246531697716587ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)32792;
unsigned char var_17 = (unsigned char)40;
unsigned long long int var_18 = 7653031486736003883ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
