#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3243214804628356720ULL;
long long int var_4 = -5197304624873385923LL;
long long int var_8 = -8898724460837700623LL;
unsigned long long int var_10 = 10724992621566956017ULL;
long long int var_11 = -2584932778078852502LL;
int zero = 0;
signed char var_16 = (signed char)-17;
short var_17 = (short)-25635;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
