#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12109781685741401249ULL;
unsigned long long int var_2 = 12993824586140354662ULL;
signed char var_3 = (signed char)-55;
int var_4 = 1286663325;
unsigned short var_5 = (unsigned short)53436;
unsigned short var_7 = (unsigned short)51745;
unsigned short var_9 = (unsigned short)37846;
int zero = 0;
unsigned long long int var_11 = 16760197850553022122ULL;
unsigned long long int var_12 = 15030343072679708644ULL;
unsigned int var_13 = 747719203U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
