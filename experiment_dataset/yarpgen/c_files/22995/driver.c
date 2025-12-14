#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)135;
unsigned char var_8 = (unsigned char)212;
unsigned short var_9 = (unsigned short)38471;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 5727133544099670187ULL;
signed char var_14 = (signed char)98;
unsigned short var_15 = (unsigned short)49657;
signed char var_16 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
