#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1439363933723228360ULL;
short var_3 = (short)20474;
unsigned short var_4 = (unsigned short)42321;
signed char var_5 = (signed char)-12;
unsigned long long int var_6 = 17197284515303484558ULL;
unsigned int var_8 = 1761904541U;
signed char var_9 = (signed char)-33;
int zero = 0;
unsigned short var_10 = (unsigned short)17705;
unsigned long long int var_11 = 8512487107181655377ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
