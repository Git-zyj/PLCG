#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-18163;
unsigned long long int var_5 = 17117796805913681107ULL;
int var_6 = 1424055879;
unsigned long long int var_8 = 7878674830582756310ULL;
unsigned long long int var_10 = 1911486020033950868ULL;
int zero = 0;
signed char var_11 = (signed char)-20;
unsigned long long int var_12 = 16570295140291793815ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
