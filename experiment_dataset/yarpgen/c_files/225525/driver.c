#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-51;
int var_2 = 1653549720;
short var_3 = (short)-17643;
int var_6 = -450912413;
unsigned int var_7 = 2247244637U;
int var_8 = -880631305;
signed char var_9 = (signed char)16;
int zero = 0;
unsigned short var_11 = (unsigned short)44207;
int var_12 = -703873674;
signed char var_13 = (signed char)70;
int var_14 = -1044897028;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
