#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)145;
signed char var_10 = (signed char)-37;
unsigned short var_11 = (unsigned short)62545;
unsigned int var_18 = 1463763012U;
int zero = 0;
unsigned char var_20 = (unsigned char)167;
signed char var_21 = (signed char)73;
unsigned long long int var_22 = 8395157283996911948ULL;
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
