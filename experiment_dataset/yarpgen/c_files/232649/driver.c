#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3549334456995997642ULL;
signed char var_2 = (signed char)125;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 8709199255121764786ULL;
unsigned short var_12 = (unsigned short)38444;
int zero = 0;
signed char var_15 = (signed char)48;
signed char var_16 = (signed char)-97;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)15839;
signed char var_19 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
