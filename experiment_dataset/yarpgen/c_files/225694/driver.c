#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-46;
unsigned int var_5 = 3142498209U;
unsigned long long int var_8 = 11591204512950057273ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)62795;
int var_12 = -22483683;
unsigned char var_13 = (unsigned char)45;
int var_14 = -1892156351;
unsigned long long int var_15 = 9027229849047605990ULL;
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
