#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2741305803517549375ULL;
unsigned long long int var_2 = 7554161721838578356ULL;
unsigned long long int var_13 = 7757364645542347677ULL;
unsigned long long int var_16 = 6248298242237542140ULL;
int zero = 0;
unsigned long long int var_18 = 11670582683219900941ULL;
unsigned long long int var_19 = 9271115654570190534ULL;
unsigned long long int var_20 = 10738340800031479405ULL;
void init() {
}

void checksum() {
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
