#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31640;
long long int var_8 = 8268616023639405317LL;
unsigned char var_9 = (unsigned char)12;
signed char var_10 = (signed char)-72;
int zero = 0;
long long int var_13 = 2380361219458841508LL;
signed char var_14 = (signed char)-26;
signed char var_15 = (signed char)104;
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
