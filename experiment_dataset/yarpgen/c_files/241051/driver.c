#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1971928675722130290LL;
unsigned long long int var_4 = 15875113838221250761ULL;
unsigned long long int var_6 = 5924676534014129256ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)191;
long long int var_13 = -3688581386145589104LL;
void init() {
}

void checksum() {
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
