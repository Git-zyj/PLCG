#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9119607300495081417LL;
unsigned char var_5 = (unsigned char)91;
unsigned char var_8 = (unsigned char)236;
long long int var_10 = 1281285758006025899LL;
int zero = 0;
unsigned long long int var_11 = 5234881650943380118ULL;
unsigned char var_12 = (unsigned char)1;
unsigned long long int var_13 = 18166739564878613908ULL;
long long int var_14 = 5893141320837545281LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
