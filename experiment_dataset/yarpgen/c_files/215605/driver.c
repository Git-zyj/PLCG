#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3050932277U;
unsigned long long int var_2 = 14576283352311339186ULL;
unsigned int var_3 = 706933586U;
int var_6 = -1080779884;
int var_7 = -1611632497;
unsigned long long int var_12 = 14936472388470586426ULL;
int zero = 0;
signed char var_15 = (signed char)-9;
int var_16 = 2043274764;
signed char var_17 = (signed char)-61;
unsigned char var_18 = (unsigned char)90;
unsigned long long int var_19 = 2939676265200150307ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
