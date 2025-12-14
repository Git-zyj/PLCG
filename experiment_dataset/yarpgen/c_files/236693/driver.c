#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4043223480U;
long long int var_6 = -7121852545314561330LL;
unsigned long long int var_7 = 1345907229873278495ULL;
unsigned char var_9 = (unsigned char)202;
unsigned short var_10 = (unsigned short)29615;
int zero = 0;
long long int var_11 = 785063031149637190LL;
short var_12 = (short)29326;
void init() {
}

void checksum() {
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
