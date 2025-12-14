#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)51647;
signed char var_6 = (signed char)-58;
unsigned short var_8 = (unsigned short)14877;
unsigned long long int var_15 = 5077702871220602056ULL;
unsigned int var_16 = 1936328796U;
int zero = 0;
unsigned short var_17 = (unsigned short)45705;
int var_18 = 603665309;
unsigned int var_19 = 1021786378U;
void init() {
}

void checksum() {
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
