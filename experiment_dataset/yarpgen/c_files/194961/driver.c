#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3014881697U;
int var_3 = -1010421364;
unsigned long long int var_7 = 13347191691468589763ULL;
signed char var_9 = (signed char)124;
int var_11 = 1845214200;
int zero = 0;
unsigned long long int var_18 = 3366675191683327712ULL;
unsigned int var_19 = 396681498U;
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
