#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-26047;
int var_7 = 290795126;
unsigned int var_8 = 2117450690U;
int var_9 = -635994181;
unsigned long long int var_13 = 16957406284660237597ULL;
short var_15 = (short)-14199;
int zero = 0;
int var_18 = 1114810824;
signed char var_19 = (signed char)-17;
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
