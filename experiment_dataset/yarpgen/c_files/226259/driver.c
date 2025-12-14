#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-670;
unsigned char var_4 = (unsigned char)174;
unsigned long long int var_5 = 6078506982319477181ULL;
unsigned char var_7 = (unsigned char)116;
unsigned long long int var_9 = 10654193255256967036ULL;
unsigned char var_10 = (unsigned char)78;
int zero = 0;
signed char var_15 = (signed char)-15;
long long int var_16 = -6991119033710551322LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
