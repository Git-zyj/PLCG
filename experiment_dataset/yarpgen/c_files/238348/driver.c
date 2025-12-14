#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)158;
unsigned int var_1 = 1293679376U;
unsigned long long int var_2 = 5700884219877764522ULL;
signed char var_5 = (signed char)53;
int var_6 = -1141995430;
unsigned short var_7 = (unsigned short)64343;
int var_8 = 130004100;
unsigned long long int var_9 = 7678171388165829618ULL;
int zero = 0;
unsigned int var_10 = 791767299U;
unsigned char var_11 = (unsigned char)253;
unsigned int var_12 = 908465966U;
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
