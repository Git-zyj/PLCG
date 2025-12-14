#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
signed char var_1 = (signed char)-23;
unsigned short var_2 = (unsigned short)61886;
unsigned int var_3 = 2161604774U;
signed char var_4 = (signed char)62;
unsigned long long int var_5 = 15603266223111276460ULL;
unsigned int var_8 = 2362580714U;
int zero = 0;
signed char var_10 = (signed char)85;
short var_11 = (short)7501;
signed char var_12 = (signed char)-98;
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
