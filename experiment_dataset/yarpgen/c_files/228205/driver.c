#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15419278687193738320ULL;
signed char var_4 = (signed char)-121;
short var_6 = (short)29669;
unsigned long long int var_7 = 6327315227862576435ULL;
unsigned int var_8 = 3025554829U;
signed char var_9 = (signed char)-66;
short var_12 = (short)-11602;
signed char var_13 = (signed char)-16;
int zero = 0;
long long int var_17 = -3338222899538084235LL;
unsigned short var_18 = (unsigned short)3786;
unsigned int var_19 = 1297413953U;
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
