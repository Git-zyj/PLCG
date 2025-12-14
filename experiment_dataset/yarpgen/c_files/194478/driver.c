#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6296118004728173583LL;
unsigned long long int var_17 = 16492835736184054135ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)57078;
unsigned char var_20 = (unsigned char)91;
unsigned char var_21 = (unsigned char)183;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
