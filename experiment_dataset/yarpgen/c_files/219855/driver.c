#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)105;
short var_3 = (short)-29904;
unsigned int var_4 = 1240623729U;
unsigned int var_5 = 2805031014U;
short var_7 = (short)-18627;
int zero = 0;
unsigned long long int var_14 = 4077352143110625830ULL;
unsigned long long int var_15 = 17305123544703897720ULL;
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
