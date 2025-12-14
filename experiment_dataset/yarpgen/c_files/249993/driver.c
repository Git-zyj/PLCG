#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5843031748243548715ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 16126437922244927587ULL;
unsigned int var_7 = 675929040U;
short var_8 = (short)-27976;
unsigned short var_15 = (unsigned short)40510;
int zero = 0;
unsigned short var_16 = (unsigned short)910;
short var_17 = (short)-3087;
void init() {
}

void checksum() {
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
