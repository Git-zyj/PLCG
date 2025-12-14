#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)108;
signed char var_3 = (signed char)12;
unsigned char var_6 = (unsigned char)8;
unsigned short var_14 = (unsigned short)31341;
int zero = 0;
int var_17 = 445840103;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
