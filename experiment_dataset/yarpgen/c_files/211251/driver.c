#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)8;
unsigned char var_4 = (unsigned char)102;
short var_5 = (short)-31322;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 7771761624211596683ULL;
unsigned long long int var_21 = 17460679349159758549ULL;
void init() {
}

void checksum() {
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
