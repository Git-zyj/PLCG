#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)57916;
unsigned int var_4 = 141396743U;
unsigned long long int var_5 = 1276684105731748693ULL;
int var_10 = -984555309;
int zero = 0;
int var_11 = -468489991;
unsigned int var_12 = 741664438U;
unsigned short var_13 = (unsigned short)28016;
unsigned long long int var_14 = 591238087868648958ULL;
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
