#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)45;
signed char var_6 = (signed char)82;
int var_7 = 765584074;
signed char var_8 = (signed char)-37;
signed char var_10 = (signed char)127;
int var_11 = -2002379765;
int zero = 0;
unsigned short var_13 = (unsigned short)38325;
unsigned char var_14 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
