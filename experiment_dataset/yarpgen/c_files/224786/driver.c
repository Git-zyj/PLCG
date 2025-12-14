#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)217;
long long int var_2 = 8579153951883059955LL;
int var_4 = -876092347;
int var_6 = 382726310;
int var_8 = 816861851;
_Bool var_11 = (_Bool)1;
long long int var_12 = 4405629599412916406LL;
int zero = 0;
unsigned char var_14 = (unsigned char)75;
int var_15 = 506256598;
void init() {
}

void checksum() {
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
