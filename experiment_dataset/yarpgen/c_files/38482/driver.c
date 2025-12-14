#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10661292409369459113ULL;
int var_2 = 780845794;
unsigned long long int var_3 = 2335491152767191887ULL;
signed char var_4 = (signed char)-93;
long long int var_5 = -1184498815992239199LL;
unsigned int var_6 = 4259848016U;
unsigned long long int var_8 = 952236146408669100ULL;
unsigned short var_10 = (unsigned short)24126;
int zero = 0;
unsigned char var_12 = (unsigned char)209;
int var_13 = -1198910589;
unsigned long long int var_14 = 3186208174427574280ULL;
int var_15 = -1764238651;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
