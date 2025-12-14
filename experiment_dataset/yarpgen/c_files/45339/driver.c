#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)74;
unsigned char var_2 = (unsigned char)50;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 12504439767281586447ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)-65;
long long int var_18 = -4939047660481647278LL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 588557411U;
int var_21 = 1358087441;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
