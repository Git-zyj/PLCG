#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)111;
int var_3 = 328915697;
unsigned long long int var_4 = 11621804106725130120ULL;
long long int var_8 = -776293139255301114LL;
signed char var_9 = (signed char)13;
int zero = 0;
unsigned int var_19 = 490016216U;
signed char var_20 = (signed char)-115;
unsigned int var_21 = 355915548U;
unsigned short var_22 = (unsigned short)26541;
unsigned int var_23 = 1482604414U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
