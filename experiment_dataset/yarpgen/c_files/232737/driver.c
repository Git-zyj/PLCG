#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)60;
signed char var_3 = (signed char)-59;
unsigned long long int var_4 = 5730438085840614226ULL;
unsigned long long int var_9 = 11088956022210719587ULL;
int zero = 0;
signed char var_13 = (signed char)-85;
unsigned long long int var_14 = 16915588683815041654ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
