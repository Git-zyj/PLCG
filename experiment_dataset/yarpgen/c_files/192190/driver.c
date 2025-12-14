#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)29;
unsigned int var_4 = 2972655690U;
unsigned char var_6 = (unsigned char)89;
int var_8 = -108693940;
unsigned int var_9 = 2627517564U;
unsigned char var_11 = (unsigned char)83;
unsigned char var_15 = (unsigned char)157;
unsigned char var_17 = (unsigned char)112;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1109687279;
unsigned char var_21 = (unsigned char)22;
unsigned short var_22 = (unsigned short)21163;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
