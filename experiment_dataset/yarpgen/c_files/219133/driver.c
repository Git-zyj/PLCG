#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 557164306432585555LL;
unsigned short var_1 = (unsigned short)63287;
signed char var_3 = (signed char)-60;
signed char var_4 = (signed char)-44;
long long int var_6 = -3481096237120476797LL;
int var_7 = -1476380506;
unsigned short var_9 = (unsigned short)53989;
int zero = 0;
unsigned short var_10 = (unsigned short)47694;
unsigned long long int var_11 = 9066067036661917010ULL;
unsigned char var_12 = (unsigned char)64;
unsigned int var_13 = 544657340U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
