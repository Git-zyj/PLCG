#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_14 = (signed char)-115;
short var_16 = (short)31413;
_Bool var_17 = (_Bool)0;
unsigned short var_19 = (unsigned short)21279;
int zero = 0;
unsigned short var_20 = (unsigned short)40169;
unsigned long long int var_21 = 12998086560963234628ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
