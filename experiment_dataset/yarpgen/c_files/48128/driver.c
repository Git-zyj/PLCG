#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7080624188125009123LL;
unsigned long long int var_2 = 3791498303223770331ULL;
unsigned int var_4 = 1117887249U;
signed char var_13 = (signed char)56;
unsigned long long int var_15 = 9172569398599375548ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)223;
unsigned long long int var_19 = 17106275067026430219ULL;
unsigned int var_20 = 3350910647U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
