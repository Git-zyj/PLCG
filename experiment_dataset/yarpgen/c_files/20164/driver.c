#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)94;
int var_2 = -892742132;
signed char var_3 = (signed char)62;
long long int var_7 = -4364833838450451303LL;
int zero = 0;
long long int var_11 = 5998290900831846750LL;
short var_12 = (short)17564;
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
