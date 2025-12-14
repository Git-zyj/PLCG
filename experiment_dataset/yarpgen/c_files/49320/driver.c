#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -716411467;
int var_2 = 970341986;
int var_8 = -1322434828;
int var_12 = 587932229;
unsigned int var_13 = 3256293204U;
signed char var_15 = (signed char)-89;
int zero = 0;
unsigned int var_17 = 436464174U;
int var_18 = -1405661631;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
