#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)121;
unsigned char var_6 = (unsigned char)62;
long long int var_8 = -2805155366382081501LL;
int zero = 0;
long long int var_12 = 7598320106390379915LL;
signed char var_13 = (signed char)117;
unsigned long long int var_14 = 15292081272436280815ULL;
long long int var_15 = 5204406245467351048LL;
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
