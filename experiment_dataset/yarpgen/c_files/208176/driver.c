#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-46;
int var_3 = 2054479951;
unsigned long long int var_5 = 4221473296563848624ULL;
short var_6 = (short)-17605;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 367379949824629648ULL;
unsigned char var_10 = (unsigned char)132;
int zero = 0;
unsigned int var_11 = 1308515669U;
unsigned long long int var_12 = 1302703886351820899ULL;
int var_13 = -1714896103;
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
