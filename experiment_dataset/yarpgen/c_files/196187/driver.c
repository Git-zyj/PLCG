#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 576129910;
unsigned char var_4 = (unsigned char)159;
long long int var_6 = 8348084333828602038LL;
unsigned char var_7 = (unsigned char)227;
unsigned char var_10 = (unsigned char)71;
unsigned char var_11 = (unsigned char)195;
int zero = 0;
int var_13 = 835565346;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 9728494329360118758ULL;
void init() {
}

void checksum() {
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
