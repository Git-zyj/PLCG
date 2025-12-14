#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-114;
unsigned long long int var_3 = 544349828013954873ULL;
signed char var_7 = (signed char)-111;
unsigned char var_8 = (unsigned char)33;
signed char var_10 = (signed char)-45;
long long int var_11 = -5626082462648707107LL;
signed char var_12 = (signed char)-90;
signed char var_14 = (signed char)-11;
int zero = 0;
signed char var_20 = (signed char)92;
signed char var_21 = (signed char)-71;
unsigned long long int var_22 = 18383645850933511073ULL;
signed char var_23 = (signed char)17;
unsigned char var_24 = (unsigned char)250;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
