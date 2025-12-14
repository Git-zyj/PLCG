#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2186395;
unsigned char var_2 = (unsigned char)150;
unsigned int var_3 = 1149464213U;
unsigned int var_4 = 1428699962U;
unsigned int var_6 = 3184065720U;
unsigned char var_9 = (unsigned char)218;
int var_10 = -692434419;
unsigned short var_11 = (unsigned short)59984;
int zero = 0;
unsigned char var_17 = (unsigned char)183;
unsigned short var_18 = (unsigned short)24259;
unsigned short var_19 = (unsigned short)32550;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
