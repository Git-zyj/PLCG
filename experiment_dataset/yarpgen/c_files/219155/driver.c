#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 2112529164;
short var_5 = (short)21752;
int var_6 = -1687088277;
unsigned long long int var_9 = 15786702172482317329ULL;
signed char var_11 = (signed char)-50;
int zero = 0;
int var_16 = 270951598;
short var_17 = (short)21505;
unsigned long long int var_18 = 17578624896962161491ULL;
unsigned short var_19 = (unsigned short)52130;
unsigned int var_20 = 3067592754U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
