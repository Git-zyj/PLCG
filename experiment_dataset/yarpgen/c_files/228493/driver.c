#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58817;
unsigned int var_2 = 1011593370U;
_Bool var_7 = (_Bool)1;
signed char var_12 = (signed char)-111;
int var_18 = 191256421;
int zero = 0;
unsigned char var_19 = (unsigned char)141;
unsigned int var_20 = 2241671728U;
int var_21 = -1953826480;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
