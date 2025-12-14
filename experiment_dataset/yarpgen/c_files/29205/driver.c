#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 745637182U;
unsigned short var_3 = (unsigned short)41180;
unsigned char var_6 = (unsigned char)138;
unsigned int var_7 = 2902433264U;
unsigned short var_9 = (unsigned short)57553;
int zero = 0;
unsigned int var_18 = 3607979073U;
signed char var_19 = (signed char)-122;
unsigned short var_20 = (unsigned short)27050;
unsigned long long int var_21 = 1260142186412966285ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
