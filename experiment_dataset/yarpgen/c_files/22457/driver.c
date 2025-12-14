#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)82;
unsigned long long int var_2 = 3851960860949090318ULL;
unsigned int var_5 = 3455732921U;
unsigned long long int var_6 = 17019170015170195125ULL;
int var_7 = -1513263027;
signed char var_10 = (signed char)74;
int zero = 0;
unsigned char var_18 = (unsigned char)226;
unsigned long long int var_19 = 16726029216370599937ULL;
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
