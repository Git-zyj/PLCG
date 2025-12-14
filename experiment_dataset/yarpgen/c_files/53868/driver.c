#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4778472644044224829ULL;
unsigned char var_4 = (unsigned char)123;
unsigned char var_6 = (unsigned char)21;
int zero = 0;
long long int var_20 = -3094830427353514956LL;
signed char var_21 = (signed char)-98;
unsigned short var_22 = (unsigned short)43150;
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
