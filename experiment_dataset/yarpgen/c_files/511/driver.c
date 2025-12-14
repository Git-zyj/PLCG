#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
unsigned char var_7 = (unsigned char)82;
unsigned long long int var_8 = 4940279143120068285ULL;
unsigned long long int var_10 = 5626392998602082609ULL;
signed char var_11 = (signed char)-108;
unsigned long long int var_18 = 3354101474540390252ULL;
int zero = 0;
signed char var_20 = (signed char)26;
long long int var_21 = -2507181723072264860LL;
signed char var_22 = (signed char)107;
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
