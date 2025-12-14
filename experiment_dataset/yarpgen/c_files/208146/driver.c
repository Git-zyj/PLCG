#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27980;
unsigned long long int var_3 = 246976829780148709ULL;
unsigned char var_5 = (unsigned char)24;
long long int var_7 = 8751001433275574006LL;
int var_8 = 1817702221;
int zero = 0;
long long int var_12 = -6649375457099836066LL;
unsigned int var_13 = 3662081258U;
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
