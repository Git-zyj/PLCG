#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3265200895U;
unsigned long long int var_7 = 11423947002490678871ULL;
signed char var_9 = (signed char)34;
unsigned int var_11 = 4054697660U;
int zero = 0;
unsigned int var_14 = 4020053194U;
short var_15 = (short)-25193;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
