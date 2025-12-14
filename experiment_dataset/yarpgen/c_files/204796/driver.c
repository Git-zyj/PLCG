#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31115;
unsigned short var_7 = (unsigned short)18926;
long long int var_9 = 7961524966571027240LL;
int zero = 0;
unsigned short var_19 = (unsigned short)15800;
unsigned char var_20 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
