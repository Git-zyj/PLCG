#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = -8121717164736865209LL;
long long int var_15 = 6179238766937317033LL;
int zero = 0;
unsigned long long int var_19 = 17777265301645324653ULL;
unsigned short var_20 = (unsigned short)61206;
void init() {
}

void checksum() {
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
