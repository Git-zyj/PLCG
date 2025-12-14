#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)10959;
signed char var_6 = (signed char)-3;
long long int var_9 = 3946876632298390451LL;
long long int var_11 = -2561660192648771167LL;
unsigned long long int var_13 = 11830608617064809549ULL;
unsigned int var_14 = 438201597U;
int zero = 0;
unsigned char var_15 = (unsigned char)57;
long long int var_16 = -4993835650029289664LL;
signed char var_17 = (signed char)-63;
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
