#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8328;
long long int var_2 = 1698476173397804490LL;
unsigned int var_4 = 3133311310U;
signed char var_5 = (signed char)-12;
unsigned char var_8 = (unsigned char)156;
int var_10 = -240068290;
int zero = 0;
unsigned long long int var_13 = 14956147754089841234ULL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-16764;
signed char var_16 = (signed char)-52;
long long int var_17 = 8716842390900650610LL;
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
