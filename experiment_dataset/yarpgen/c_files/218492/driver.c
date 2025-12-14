#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18195;
signed char var_7 = (signed char)-37;
unsigned int var_9 = 653716980U;
unsigned short var_10 = (unsigned short)38140;
int var_12 = 1308697327;
_Bool var_14 = (_Bool)1;
unsigned long long int var_17 = 10133913001797475973ULL;
unsigned char var_19 = (unsigned char)216;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)90;
unsigned int var_23 = 410993491U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
