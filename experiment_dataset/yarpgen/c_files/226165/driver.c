#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15098357362978190660ULL;
unsigned long long int var_4 = 4591488882740243834ULL;
unsigned long long int var_5 = 311260903308915268ULL;
unsigned long long int var_9 = 16308034904180345761ULL;
int zero = 0;
unsigned long long int var_11 = 15034523568007432068ULL;
unsigned short var_12 = (unsigned short)51058;
unsigned long long int var_13 = 1456737157227894531ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
