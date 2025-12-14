#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14345370999385627001ULL;
signed char var_2 = (signed char)-69;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)182;
unsigned char var_5 = (unsigned char)228;
long long int var_6 = 4451826301807566780LL;
signed char var_9 = (signed char)-20;
int zero = 0;
unsigned int var_10 = 1692257629U;
int var_11 = 197139916;
signed char var_12 = (signed char)-124;
unsigned short var_13 = (unsigned short)5413;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
