#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 895201920;
unsigned long long int var_13 = 5141859176102927934ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)53357;
int var_20 = -1909510809;
signed char var_21 = (signed char)-84;
void init() {
}

void checksum() {
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
