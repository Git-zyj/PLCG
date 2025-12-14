#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)21;
long long int var_2 = 6185981288285957739LL;
long long int var_3 = 9184276320101495639LL;
long long int var_5 = 1581766668050747332LL;
int zero = 0;
unsigned char var_10 = (unsigned char)210;
int var_11 = 266125016;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
