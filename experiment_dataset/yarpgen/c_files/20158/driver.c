#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)119;
unsigned char var_3 = (unsigned char)63;
short var_4 = (short)20563;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-46;
short var_9 = (short)11347;
unsigned int var_10 = 1813005821U;
unsigned char var_11 = (unsigned char)165;
int zero = 0;
unsigned int var_12 = 3005662458U;
unsigned long long int var_13 = 15867486536436764166ULL;
long long int var_14 = -9033267744178207350LL;
signed char var_15 = (signed char)38;
unsigned long long int var_16 = 9270519653897338631ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
