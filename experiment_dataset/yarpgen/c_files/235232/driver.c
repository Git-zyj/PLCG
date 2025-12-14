#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)46;
unsigned long long int var_6 = 3393186190094202576ULL;
unsigned long long int var_8 = 15890005995502097059ULL;
unsigned char var_9 = (unsigned char)202;
unsigned char var_10 = (unsigned char)45;
signed char var_12 = (signed char)-79;
int zero = 0;
int var_13 = -285101190;
unsigned char var_14 = (unsigned char)181;
_Bool var_15 = (_Bool)1;
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
