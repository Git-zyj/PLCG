#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)16803;
long long int var_7 = 7473607493560562037LL;
unsigned long long int var_12 = 5741401030709171670ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_19 = (short)-29285;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)169;
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
