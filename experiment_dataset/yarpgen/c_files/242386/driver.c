#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
long long int var_2 = 502629064948242839LL;
unsigned char var_4 = (unsigned char)248;
int var_6 = 1860185270;
unsigned short var_7 = (unsigned short)3986;
int zero = 0;
unsigned long long int var_10 = 1939708139434871711ULL;
unsigned long long int var_11 = 16079262207829833168ULL;
int var_12 = -835100814;
long long int var_13 = -4637416322513082454LL;
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
