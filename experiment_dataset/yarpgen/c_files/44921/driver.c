#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 932829383U;
signed char var_1 = (signed char)56;
short var_3 = (short)26838;
unsigned long long int var_8 = 18026483639895556541ULL;
unsigned short var_10 = (unsigned short)9407;
unsigned int var_11 = 2492641134U;
int zero = 0;
unsigned int var_12 = 4283899746U;
unsigned short var_13 = (unsigned short)49629;
signed char var_14 = (signed char)8;
signed char var_15 = (signed char)-13;
unsigned long long int var_16 = 17993707992540045620ULL;
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
