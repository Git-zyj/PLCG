#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2879083311117778624ULL;
unsigned short var_1 = (unsigned short)4455;
unsigned long long int var_2 = 17236655774648320657ULL;
int var_3 = 1289628278;
signed char var_6 = (signed char)-69;
unsigned long long int var_13 = 10813455189198297205ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)16806;
unsigned long long int var_21 = 2510247679044584772ULL;
void init() {
}

void checksum() {
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
