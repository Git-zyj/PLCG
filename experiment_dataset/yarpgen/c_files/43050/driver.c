#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1693186965U;
signed char var_1 = (signed char)-104;
unsigned char var_6 = (unsigned char)56;
unsigned char var_9 = (unsigned char)233;
unsigned char var_11 = (unsigned char)251;
signed char var_12 = (signed char)23;
unsigned long long int var_13 = 7950186951195938906ULL;
unsigned int var_16 = 1147221377U;
int zero = 0;
signed char var_20 = (signed char)-94;
unsigned char var_21 = (unsigned char)152;
signed char var_22 = (signed char)-83;
void init() {
}

void checksum() {
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
