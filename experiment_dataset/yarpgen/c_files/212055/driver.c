#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2114741488U;
unsigned int var_2 = 2168992989U;
signed char var_3 = (signed char)56;
unsigned long long int var_8 = 9488825918293367174ULL;
int var_9 = 1538794629;
unsigned long long int var_10 = 8529995951745653870ULL;
unsigned short var_12 = (unsigned short)36196;
unsigned int var_13 = 3719064282U;
int zero = 0;
unsigned char var_18 = (unsigned char)190;
unsigned char var_19 = (unsigned char)202;
_Bool var_20 = (_Bool)0;
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
