#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-91;
unsigned long long int var_10 = 12057046802982483694ULL;
_Bool var_13 = (_Bool)0;
unsigned short var_15 = (unsigned short)53818;
unsigned short var_17 = (unsigned short)41922;
int zero = 0;
unsigned char var_18 = (unsigned char)99;
signed char var_19 = (signed char)69;
unsigned char var_20 = (unsigned char)61;
unsigned short var_21 = (unsigned short)65003;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
