#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-126;
long long int var_16 = 4555663141912507413LL;
int zero = 0;
unsigned short var_19 = (unsigned short)7981;
unsigned long long int var_20 = 15717805653283515861ULL;
unsigned int var_21 = 4100508702U;
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
