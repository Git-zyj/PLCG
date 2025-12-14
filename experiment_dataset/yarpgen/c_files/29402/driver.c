#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
int var_1 = 82523339;
long long int var_3 = -61951626001426596LL;
unsigned short var_7 = (unsigned short)4668;
int var_8 = -479735021;
int var_9 = -327798530;
unsigned long long int var_11 = 12509373383361453876ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)219;
unsigned long long int var_14 = 17509674102144854238ULL;
unsigned char var_15 = (unsigned char)135;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
