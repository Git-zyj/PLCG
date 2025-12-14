#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 10914897334049985840ULL;
unsigned long long int var_10 = 10131546751117497974ULL;
short var_11 = (short)-10878;
int zero = 0;
unsigned long long int var_12 = 18044866867492738186ULL;
unsigned short var_13 = (unsigned short)54100;
void init() {
}

void checksum() {
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
