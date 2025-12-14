#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)21;
signed char var_7 = (signed char)113;
signed char var_8 = (signed char)38;
unsigned int var_17 = 296290193U;
int zero = 0;
unsigned int var_20 = 2361153959U;
unsigned long long int var_21 = 7309716632844552181ULL;
unsigned char var_22 = (unsigned char)27;
void init() {
}

void checksum() {
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
