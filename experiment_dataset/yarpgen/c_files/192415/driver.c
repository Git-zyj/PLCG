#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)71;
long long int var_9 = 8080054565352872026LL;
unsigned short var_10 = (unsigned short)58693;
unsigned int var_11 = 3402179213U;
long long int var_16 = 250599957525334252LL;
int zero = 0;
signed char var_19 = (signed char)-27;
unsigned short var_20 = (unsigned short)56462;
unsigned short var_21 = (unsigned short)2691;
unsigned short var_22 = (unsigned short)60681;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
