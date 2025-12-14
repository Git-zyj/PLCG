#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6258112023054690714ULL;
unsigned long long int var_7 = 1834546289383021738ULL;
unsigned char var_8 = (unsigned char)235;
unsigned short var_9 = (unsigned short)62125;
signed char var_11 = (signed char)-2;
int zero = 0;
signed char var_15 = (signed char)-127;
unsigned char var_16 = (unsigned char)77;
signed char var_17 = (signed char)-52;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
