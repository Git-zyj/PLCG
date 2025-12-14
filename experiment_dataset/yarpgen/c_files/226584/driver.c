#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -726204937;
unsigned int var_1 = 1270044219U;
int var_2 = 166988411;
unsigned int var_10 = 4278887134U;
unsigned int var_11 = 1663043228U;
int zero = 0;
unsigned long long int var_16 = 8612916506236899644ULL;
unsigned int var_17 = 443279925U;
unsigned int var_18 = 2654163727U;
signed char var_19 = (signed char)77;
unsigned char var_20 = (unsigned char)114;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
