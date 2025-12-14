#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)26511;
unsigned short var_4 = (unsigned short)31017;
signed char var_6 = (signed char)35;
unsigned short var_7 = (unsigned short)48971;
unsigned short var_8 = (unsigned short)32067;
unsigned short var_14 = (unsigned short)50469;
unsigned long long int var_16 = 17403874837084816494ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)22054;
signed char var_20 = (signed char)109;
unsigned long long int var_21 = 468401333126058278ULL;
unsigned short var_22 = (unsigned short)58987;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
