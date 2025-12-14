#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1974500918;
signed char var_6 = (signed char)-49;
unsigned char var_7 = (unsigned char)115;
signed char var_8 = (signed char)-85;
int zero = 0;
unsigned short var_10 = (unsigned short)28331;
signed char var_11 = (signed char)-45;
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
