#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2741;
unsigned long long int var_3 = 18307634733942815154ULL;
_Bool var_9 = (_Bool)1;
int var_10 = -714505006;
unsigned long long int var_11 = 844788293257906571ULL;
signed char var_12 = (signed char)-64;
int zero = 0;
unsigned char var_14 = (unsigned char)221;
long long int var_15 = 5599780269450807929LL;
unsigned int var_16 = 2401797051U;
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
