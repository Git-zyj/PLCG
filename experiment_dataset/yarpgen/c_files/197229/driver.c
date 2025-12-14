#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -67643416;
signed char var_7 = (signed char)-104;
unsigned long long int var_8 = 4774612258493847284ULL;
unsigned long long int var_9 = 1515171669755667861ULL;
unsigned char var_10 = (unsigned char)255;
int zero = 0;
signed char var_11 = (signed char)-60;
short var_12 = (short)-26593;
signed char var_13 = (signed char)-69;
unsigned long long int var_14 = 14964048707580656621ULL;
signed char var_15 = (signed char)-18;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
