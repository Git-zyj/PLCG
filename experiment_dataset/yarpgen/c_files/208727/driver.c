#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17054672983739066452ULL;
int var_2 = -512562370;
unsigned int var_3 = 1198784569U;
unsigned long long int var_4 = 5243016856127935569ULL;
unsigned char var_5 = (unsigned char)105;
_Bool var_8 = (_Bool)0;
short var_11 = (short)2384;
int zero = 0;
unsigned long long int var_12 = 16202654282773603785ULL;
signed char var_13 = (signed char)89;
int var_14 = 1598061124;
short var_15 = (short)-5624;
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
