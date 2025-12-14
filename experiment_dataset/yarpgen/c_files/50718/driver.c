#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-844;
unsigned long long int var_6 = 14506368637737763763ULL;
long long int var_7 = 4701529387205785685LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 8247475920285023964ULL;
long long int var_10 = -819279931397595189LL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)253;
int var_13 = -689716623;
int zero = 0;
int var_15 = 1477491653;
long long int var_16 = 1589440918907468144LL;
signed char var_17 = (signed char)-75;
int var_18 = 1434169065;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
