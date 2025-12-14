#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -376369586;
long long int var_5 = -7497419658017418484LL;
int zero = 0;
long long int var_10 = 5839210429703322391LL;
unsigned char var_11 = (unsigned char)78;
unsigned char var_12 = (unsigned char)92;
unsigned int var_13 = 229002903U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
