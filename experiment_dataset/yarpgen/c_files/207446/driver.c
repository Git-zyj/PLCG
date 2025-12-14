#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9802862270019494429ULL;
unsigned char var_1 = (unsigned char)253;
unsigned int var_7 = 1397866186U;
int zero = 0;
signed char var_18 = (signed char)61;
int var_19 = -477152994;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
