#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1879428423;
unsigned short var_7 = (unsigned short)57707;
unsigned long long int var_11 = 13147336065316902538ULL;
int zero = 0;
unsigned long long int var_18 = 11901125647328166474ULL;
short var_19 = (short)-20617;
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
