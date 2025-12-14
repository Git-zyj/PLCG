#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1101246417;
short var_1 = (short)-9948;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 12112004609292770510ULL;
unsigned int var_8 = 3869386572U;
signed char var_9 = (signed char)-67;
int zero = 0;
int var_10 = 2058950112;
short var_11 = (short)4154;
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
