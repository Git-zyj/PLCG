#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4236970547675607340LL;
int var_3 = -802420954;
int var_7 = 840714426;
unsigned char var_17 = (unsigned char)227;
int zero = 0;
unsigned char var_18 = (unsigned char)145;
signed char var_19 = (signed char)-91;
void init() {
}

void checksum() {
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
