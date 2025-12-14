#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5321658132594095592LL;
unsigned long long int var_8 = 4694582102818714623ULL;
long long int var_11 = 4301642563891741338LL;
signed char var_14 = (signed char)-41;
short var_16 = (short)-27176;
int zero = 0;
int var_17 = -826587374;
unsigned int var_18 = 4051092496U;
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
