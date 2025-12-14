#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2102645975U;
unsigned char var_9 = (unsigned char)173;
unsigned int var_11 = 3353600722U;
signed char var_13 = (signed char)-39;
int zero = 0;
long long int var_15 = 8381456479189895270LL;
unsigned short var_16 = (unsigned short)26599;
signed char var_17 = (signed char)-93;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
