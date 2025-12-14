#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28666;
long long int var_1 = 6859009711242245907LL;
long long int var_7 = 5327900439226031056LL;
short var_10 = (short)-15479;
unsigned long long int var_11 = 1733697044983680752ULL;
int zero = 0;
signed char var_13 = (signed char)-42;
short var_14 = (short)31369;
unsigned int var_15 = 1558494070U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
