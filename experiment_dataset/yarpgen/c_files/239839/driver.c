#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8615483503028492613LL;
signed char var_4 = (signed char)111;
short var_5 = (short)-13536;
short var_6 = (short)17888;
unsigned int var_7 = 791846535U;
int zero = 0;
long long int var_11 = -4584329416805289828LL;
short var_12 = (short)5101;
void init() {
}

void checksum() {
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
