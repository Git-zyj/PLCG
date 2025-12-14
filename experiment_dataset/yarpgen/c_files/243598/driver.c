#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 706867127U;
int var_2 = -781038589;
signed char var_3 = (signed char)38;
signed char var_7 = (signed char)-89;
short var_8 = (short)14442;
signed char var_9 = (signed char)-109;
unsigned long long int var_10 = 1436182766270357761ULL;
int var_11 = -1681089687;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 3537399206704141752ULL;
unsigned char var_16 = (unsigned char)219;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
