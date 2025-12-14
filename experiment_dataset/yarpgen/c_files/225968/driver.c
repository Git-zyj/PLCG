#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)91;
unsigned int var_3 = 3372519674U;
int var_5 = -1881128144;
unsigned int var_11 = 351760724U;
int var_12 = -143104475;
unsigned short var_16 = (unsigned short)39310;
int zero = 0;
signed char var_18 = (signed char)-123;
signed char var_19 = (signed char)125;
unsigned long long int var_20 = 7321949619515631703ULL;
unsigned int var_21 = 1708866565U;
void init() {
}

void checksum() {
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
