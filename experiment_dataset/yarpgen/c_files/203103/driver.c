#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6274032544216648694LL;
unsigned short var_6 = (unsigned short)7035;
unsigned char var_8 = (unsigned char)204;
signed char var_10 = (signed char)94;
int zero = 0;
int var_13 = 577513429;
long long int var_14 = 6932074107583452306LL;
int var_15 = -1521987518;
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
