#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24962;
unsigned short var_4 = (unsigned short)59145;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)106;
unsigned char var_10 = (unsigned char)162;
int var_15 = 409044441;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)44085;
unsigned long long int var_18 = 9598014265488091787ULL;
unsigned long long int var_19 = 17010629981603251225ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
