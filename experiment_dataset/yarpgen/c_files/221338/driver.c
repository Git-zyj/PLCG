#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12441;
int var_2 = -1249117843;
unsigned long long int var_3 = 2683556005160304008ULL;
unsigned char var_11 = (unsigned char)18;
int zero = 0;
unsigned long long int var_12 = 11453090140264612938ULL;
long long int var_13 = -7628295960251111605LL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-118;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
