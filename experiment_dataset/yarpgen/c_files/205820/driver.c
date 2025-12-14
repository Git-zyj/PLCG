#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2884633275U;
unsigned int var_6 = 318839976U;
unsigned long long int var_7 = 9266541680871644415ULL;
short var_9 = (short)6561;
unsigned long long int var_12 = 12310230920848938413ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)83;
int var_18 = -1365185002;
long long int var_19 = 3823281272062255517LL;
void init() {
}

void checksum() {
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
