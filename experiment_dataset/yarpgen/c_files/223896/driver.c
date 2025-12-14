#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1428643005U;
unsigned short var_2 = (unsigned short)47654;
signed char var_4 = (signed char)-4;
unsigned char var_7 = (unsigned char)245;
int zero = 0;
signed char var_13 = (signed char)89;
signed char var_14 = (signed char)111;
unsigned short var_15 = (unsigned short)7098;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
