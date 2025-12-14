#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1902679424;
unsigned char var_6 = (unsigned char)20;
unsigned char var_13 = (unsigned char)221;
unsigned long long int var_16 = 11177192692652061710ULL;
int zero = 0;
signed char var_18 = (signed char)-63;
int var_19 = 1681250467;
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
