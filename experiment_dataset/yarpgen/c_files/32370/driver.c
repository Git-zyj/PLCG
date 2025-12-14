#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1846752979586148251LL;
long long int var_5 = 5608507035691896036LL;
unsigned int var_11 = 1365918050U;
unsigned long long int var_12 = 17762999748401183254ULL;
unsigned char var_14 = (unsigned char)30;
int var_15 = 155818938;
unsigned char var_16 = (unsigned char)107;
int zero = 0;
short var_19 = (short)-12838;
unsigned short var_20 = (unsigned short)38332;
signed char var_21 = (signed char)20;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
