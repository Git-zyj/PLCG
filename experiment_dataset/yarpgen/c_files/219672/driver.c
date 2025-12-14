#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3304655623117803027ULL;
long long int var_2 = 3937961330207859058LL;
short var_4 = (short)7398;
signed char var_5 = (signed char)-86;
unsigned char var_6 = (unsigned char)7;
unsigned char var_7 = (unsigned char)85;
int zero = 0;
unsigned long long int var_10 = 14207250245237789797ULL;
signed char var_11 = (signed char)-65;
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
