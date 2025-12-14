#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-14;
unsigned short var_3 = (unsigned short)5688;
long long int var_10 = 3005548303804351538LL;
long long int var_12 = -1495382530661265488LL;
unsigned short var_13 = (unsigned short)60185;
long long int var_14 = -4943166546291353985LL;
int zero = 0;
unsigned int var_18 = 1222676374U;
unsigned long long int var_19 = 8248973132240903685ULL;
signed char var_20 = (signed char)95;
unsigned int var_21 = 765229141U;
unsigned short var_22 = (unsigned short)31109;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
