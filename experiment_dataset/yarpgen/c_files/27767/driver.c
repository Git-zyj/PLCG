#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19603;
unsigned long long int var_1 = 1124903190700298879ULL;
unsigned char var_3 = (unsigned char)141;
unsigned short var_4 = (unsigned short)50152;
signed char var_8 = (signed char)28;
unsigned long long int var_9 = 174773834993871876ULL;
short var_11 = (short)21274;
int zero = 0;
unsigned char var_12 = (unsigned char)120;
long long int var_13 = -2320149171970615069LL;
long long int var_14 = 1255735231814896992LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
