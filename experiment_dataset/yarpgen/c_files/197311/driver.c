#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)67;
unsigned long long int var_9 = 12551799755432413851ULL;
unsigned char var_13 = (unsigned char)143;
unsigned long long int var_16 = 15894445259100457272ULL;
unsigned char var_17 = (unsigned char)38;
int zero = 0;
int var_18 = 1817408048;
unsigned long long int var_19 = 7096363954180138080ULL;
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
