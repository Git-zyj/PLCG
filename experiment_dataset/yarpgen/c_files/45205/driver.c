#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-57;
unsigned short var_3 = (unsigned short)40568;
signed char var_4 = (signed char)-57;
int var_7 = -395942119;
unsigned char var_8 = (unsigned char)197;
int zero = 0;
unsigned short var_10 = (unsigned short)4979;
long long int var_11 = 6941878539214827548LL;
signed char var_12 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
