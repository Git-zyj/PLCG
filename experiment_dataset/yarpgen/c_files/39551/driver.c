#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_6 = 3262093252225039599LL;
unsigned char var_10 = (unsigned char)106;
signed char var_13 = (signed char)-78;
int zero = 0;
unsigned short var_18 = (unsigned short)17910;
unsigned short var_19 = (unsigned short)9097;
void init() {
}

void checksum() {
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
