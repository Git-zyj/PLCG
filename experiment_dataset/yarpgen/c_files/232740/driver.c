#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12766;
unsigned long long int var_1 = 10542566845029990511ULL;
unsigned char var_3 = (unsigned char)187;
unsigned int var_4 = 3878865651U;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)64;
unsigned char var_8 = (unsigned char)181;
unsigned int var_9 = 3778382032U;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1260968946U;
unsigned char var_12 = (unsigned char)32;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
