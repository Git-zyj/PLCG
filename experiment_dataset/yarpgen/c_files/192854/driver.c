#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)49;
int var_2 = 1196020205;
unsigned char var_3 = (unsigned char)245;
signed char var_6 = (signed char)-51;
int zero = 0;
long long int var_10 = -6931125203917538436LL;
long long int var_11 = -863575732426141908LL;
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
