#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 800446578U;
signed char var_8 = (signed char)-107;
_Bool var_14 = (_Bool)0;
int var_15 = 1667853659;
int zero = 0;
int var_16 = 1722099428;
unsigned short var_17 = (unsigned short)17126;
unsigned char var_18 = (unsigned char)57;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
