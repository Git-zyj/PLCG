#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15783513225954437491ULL;
unsigned long long int var_3 = 9622366440153319143ULL;
unsigned char var_4 = (unsigned char)30;
unsigned char var_9 = (unsigned char)72;
int zero = 0;
unsigned long long int var_18 = 4254157399278974994ULL;
unsigned long long int var_19 = 13397513242688844742ULL;
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
