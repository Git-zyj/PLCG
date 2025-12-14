#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)216;
unsigned long long int var_4 = 6407134551940872010ULL;
unsigned int var_5 = 3650581432U;
unsigned char var_6 = (unsigned char)223;
int var_7 = 1630700823;
unsigned char var_10 = (unsigned char)190;
unsigned long long int var_11 = 15849945750277078739ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 676656992U;
unsigned int var_14 = 103959060U;
unsigned long long int var_15 = 1979137110810567762ULL;
signed char var_16 = (signed char)-99;
unsigned int var_17 = 1339118396U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
