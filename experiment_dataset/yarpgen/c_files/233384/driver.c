#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-15777;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 10415071750467565118ULL;
signed char var_12 = (signed char)-43;
unsigned int var_13 = 2468597332U;
int zero = 0;
unsigned char var_17 = (unsigned char)152;
unsigned char var_18 = (unsigned char)177;
signed char var_19 = (signed char)69;
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
