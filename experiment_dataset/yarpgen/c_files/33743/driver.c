#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)86;
short var_1 = (short)-10093;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1005343698U;
unsigned long long int var_4 = 4081584489996045870ULL;
signed char var_5 = (signed char)-29;
short var_6 = (short)-26406;
unsigned char var_7 = (unsigned char)41;
int var_9 = 548820058;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-86;
int zero = 0;
unsigned long long int var_12 = 4929599235854743417ULL;
_Bool var_13 = (_Bool)1;
int var_14 = 550807399;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
