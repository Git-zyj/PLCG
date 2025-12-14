#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10716203371407606276ULL;
unsigned long long int var_4 = 10221178229016410872ULL;
unsigned char var_5 = (unsigned char)94;
signed char var_6 = (signed char)-2;
unsigned long long int var_8 = 8749193080414430525ULL;
int zero = 0;
signed char var_10 = (signed char)15;
signed char var_11 = (signed char)72;
unsigned long long int var_12 = 11728433140133551735ULL;
unsigned short var_13 = (unsigned short)49767;
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
