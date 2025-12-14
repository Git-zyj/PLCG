#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)10;
signed char var_2 = (signed char)23;
unsigned int var_5 = 2848068818U;
signed char var_6 = (signed char)57;
signed char var_10 = (signed char)-111;
unsigned int var_11 = 1646448646U;
unsigned long long int var_12 = 4942641134410914267ULL;
int zero = 0;
signed char var_13 = (signed char)55;
unsigned short var_14 = (unsigned short)19669;
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
