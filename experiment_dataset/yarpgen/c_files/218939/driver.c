#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)9143;
unsigned int var_4 = 1030155013U;
unsigned short var_9 = (unsigned short)9365;
short var_11 = (short)923;
unsigned int var_13 = 3361713123U;
signed char var_14 = (signed char)-11;
int zero = 0;
short var_18 = (short)-21173;
int var_19 = 233483683;
void init() {
}

void checksum() {
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
