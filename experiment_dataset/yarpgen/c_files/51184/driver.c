#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4547098195549635603LL;
int zero = 0;
unsigned short var_19 = (unsigned short)53985;
long long int var_20 = 8178537885792590814LL;
unsigned long long int var_21 = 9572879153940850749ULL;
int var_22 = 697385609;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
