#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5963390126179638789ULL;
short var_2 = (short)7767;
unsigned long long int var_19 = 12591447382257993571ULL;
int zero = 0;
short var_20 = (short)-4230;
unsigned long long int var_21 = 16404223259349099053ULL;
unsigned long long int var_22 = 12488028868951185830ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
