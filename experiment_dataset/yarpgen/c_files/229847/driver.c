#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43264;
signed char var_3 = (signed char)100;
signed char var_7 = (signed char)-35;
unsigned short var_11 = (unsigned short)25753;
int zero = 0;
int var_13 = 1256898246;
unsigned long long int var_14 = 4081633073429963494ULL;
unsigned long long int var_15 = 17501530042047806594ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
