#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2655796138599495094LL;
unsigned long long int var_4 = 15708462602926408145ULL;
unsigned long long int var_6 = 10190915011942822886ULL;
unsigned short var_8 = (unsigned short)31160;
short var_10 = (short)3654;
unsigned long long int var_12 = 13979086211245081609ULL;
int zero = 0;
unsigned long long int var_19 = 10284678624147433806ULL;
signed char var_20 = (signed char)-7;
unsigned char var_21 = (unsigned char)86;
unsigned char var_22 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
