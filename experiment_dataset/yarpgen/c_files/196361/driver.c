#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16215850867239763485ULL;
unsigned char var_9 = (unsigned char)150;
int zero = 0;
unsigned short var_19 = (unsigned short)65179;
int var_20 = -105555990;
unsigned short var_21 = (unsigned short)51175;
unsigned short var_22 = (unsigned short)53715;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
