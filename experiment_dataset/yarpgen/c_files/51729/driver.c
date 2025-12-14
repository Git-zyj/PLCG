#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19708;
signed char var_4 = (signed char)61;
short var_10 = (short)-25395;
signed char var_13 = (signed char)33;
int var_14 = 1554066367;
unsigned int var_17 = 2068875397U;
int zero = 0;
short var_19 = (short)-10366;
unsigned long long int var_20 = 15181627828867064032ULL;
signed char var_21 = (signed char)102;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
