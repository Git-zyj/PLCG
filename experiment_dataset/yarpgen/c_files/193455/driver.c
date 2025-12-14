#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31935;
unsigned long long int var_2 = 16298868070275654610ULL;
signed char var_5 = (signed char)-10;
unsigned int var_6 = 1121775913U;
unsigned short var_9 = (unsigned short)31523;
unsigned char var_10 = (unsigned char)40;
int zero = 0;
unsigned char var_11 = (unsigned char)55;
unsigned char var_12 = (unsigned char)179;
int var_13 = 23636496;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
