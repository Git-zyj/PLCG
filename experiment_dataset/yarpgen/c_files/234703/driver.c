#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29755;
unsigned char var_5 = (unsigned char)27;
signed char var_8 = (signed char)64;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)133;
int zero = 0;
signed char var_12 = (signed char)-77;
unsigned char var_13 = (unsigned char)220;
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
