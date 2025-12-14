#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33063;
unsigned long long int var_2 = 17165506761352415892ULL;
signed char var_5 = (signed char)-123;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)40294;
int zero = 0;
unsigned char var_13 = (unsigned char)9;
unsigned short var_14 = (unsigned short)36965;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
