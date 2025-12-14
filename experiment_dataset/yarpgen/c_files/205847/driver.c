#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
unsigned int var_1 = 218316641U;
signed char var_2 = (signed char)-45;
signed char var_4 = (signed char)-84;
unsigned char var_6 = (unsigned char)216;
short var_9 = (short)2340;
int zero = 0;
unsigned long long int var_16 = 12993096435339414444ULL;
signed char var_17 = (signed char)-24;
unsigned long long int var_18 = 15267614390368358786ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
