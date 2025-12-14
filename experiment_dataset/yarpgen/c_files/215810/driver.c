#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7360;
long long int var_7 = 4986204143223614515LL;
unsigned short var_8 = (unsigned short)23709;
unsigned long long int var_10 = 14658717148270716487ULL;
unsigned char var_12 = (unsigned char)40;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)233;
int zero = 0;
unsigned char var_18 = (unsigned char)206;
unsigned char var_19 = (unsigned char)226;
int var_20 = 586996112;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
