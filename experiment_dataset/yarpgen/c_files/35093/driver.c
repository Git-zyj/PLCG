#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)65;
unsigned long long int var_8 = 5589645422371683911ULL;
unsigned short var_11 = (unsigned short)55276;
signed char var_15 = (signed char)-104;
int zero = 0;
unsigned short var_19 = (unsigned short)46064;
int var_20 = 881830507;
unsigned char var_21 = (unsigned char)173;
unsigned int var_22 = 1593162668U;
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
