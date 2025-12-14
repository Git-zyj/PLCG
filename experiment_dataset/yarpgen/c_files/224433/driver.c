#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4284371207U;
unsigned long long int var_1 = 6858072197527740402ULL;
unsigned short var_4 = (unsigned short)41834;
short var_6 = (short)11581;
unsigned long long int var_8 = 12736649720437816222ULL;
long long int var_9 = -6726716226105489292LL;
int var_10 = 249817342;
int zero = 0;
unsigned char var_11 = (unsigned char)4;
unsigned char var_12 = (unsigned char)233;
unsigned long long int var_13 = 6077610230512382567ULL;
int var_14 = 379289086;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
