#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)169;
unsigned short var_6 = (unsigned short)17403;
signed char var_8 = (signed char)90;
unsigned int var_10 = 3604617647U;
int zero = 0;
signed char var_12 = (signed char)40;
unsigned int var_13 = 415894038U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
