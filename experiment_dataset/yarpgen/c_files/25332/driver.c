#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-105;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)46;
int var_15 = -1011510343;
int zero = 0;
unsigned long long int var_16 = 17217973078903500211ULL;
int var_17 = 901224653;
unsigned short var_18 = (unsigned short)15364;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
