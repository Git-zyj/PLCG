#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8883810642431971182ULL;
unsigned long long int var_4 = 9695626515039959217ULL;
long long int var_13 = 4367640811084021821LL;
int zero = 0;
unsigned char var_19 = (unsigned char)84;
int var_20 = 569558605;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
