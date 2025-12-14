#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-107;
unsigned short var_6 = (unsigned short)11172;
signed char var_8 = (signed char)-55;
signed char var_9 = (signed char)10;
signed char var_10 = (signed char)91;
int zero = 0;
signed char var_11 = (signed char)-71;
signed char var_12 = (signed char)-102;
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
