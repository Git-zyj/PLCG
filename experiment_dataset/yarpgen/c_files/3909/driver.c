#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)57;
unsigned long long int var_2 = 12090169746509607306ULL;
unsigned short var_5 = (unsigned short)36288;
_Bool var_6 = (_Bool)1;
int var_8 = 2114360020;
int zero = 0;
unsigned long long int var_10 = 16970617473253153461ULL;
unsigned int var_11 = 2319541984U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
