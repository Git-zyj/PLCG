#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)50;
signed char var_5 = (signed char)-110;
long long int var_6 = 1292478525644741870LL;
int var_7 = 1997978569;
int zero = 0;
long long int var_11 = -3975175665714825945LL;
int var_12 = 65483002;
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
