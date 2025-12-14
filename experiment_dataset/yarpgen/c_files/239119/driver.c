#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-127;
unsigned short var_3 = (unsigned short)40765;
unsigned char var_4 = (unsigned char)234;
unsigned long long int var_6 = 13314069087581023273ULL;
unsigned int var_7 = 222398422U;
unsigned long long int var_8 = 14468267132975428948ULL;
unsigned int var_9 = 889363202U;
int zero = 0;
unsigned char var_10 = (unsigned char)128;
unsigned short var_11 = (unsigned short)9144;
unsigned short var_12 = (unsigned short)14345;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
