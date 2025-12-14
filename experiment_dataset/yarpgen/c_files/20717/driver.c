#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1885635717;
int var_5 = -352187595;
unsigned short var_7 = (unsigned short)39031;
signed char var_9 = (signed char)51;
int zero = 0;
unsigned short var_10 = (unsigned short)32472;
unsigned char var_11 = (unsigned char)162;
signed char var_12 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
