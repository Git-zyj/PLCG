#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)54314;
unsigned char var_7 = (unsigned char)124;
unsigned short var_9 = (unsigned short)33065;
long long int var_13 = -8690963207500246483LL;
long long int var_19 = -4863882626333868938LL;
int zero = 0;
long long int var_20 = -6709439084677207767LL;
unsigned char var_21 = (unsigned char)186;
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
