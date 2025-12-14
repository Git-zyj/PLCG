#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35982;
unsigned int var_5 = 2230847039U;
unsigned long long int var_6 = 11564345599058344948ULL;
signed char var_9 = (signed char)-58;
long long int var_13 = 4811252400108385571LL;
int zero = 0;
unsigned long long int var_14 = 8982245893481896825ULL;
signed char var_15 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
