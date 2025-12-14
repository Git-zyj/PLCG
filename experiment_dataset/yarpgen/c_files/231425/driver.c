#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)108;
unsigned char var_12 = (unsigned char)71;
unsigned long long int var_14 = 9563994270581974918ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)106;
unsigned long long int var_21 = 23912708479713538ULL;
unsigned long long int var_22 = 13334280883083662822ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
