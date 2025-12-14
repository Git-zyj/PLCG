#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)77;
unsigned char var_4 = (unsigned char)226;
unsigned char var_5 = (unsigned char)39;
unsigned char var_9 = (unsigned char)222;
long long int var_16 = -1841664078744269010LL;
unsigned long long int var_18 = 17330146495396188099ULL;
int zero = 0;
int var_20 = 202658845;
_Bool var_21 = (_Bool)0;
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
