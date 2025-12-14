#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)55;
unsigned short var_1 = (unsigned short)17759;
unsigned long long int var_3 = 9219264476094058254ULL;
unsigned int var_7 = 2919634445U;
int var_9 = 46078796;
long long int var_11 = 3625275277528792853LL;
unsigned short var_12 = (unsigned short)8529;
long long int var_13 = 6198965874710003881LL;
unsigned short var_17 = (unsigned short)4634;
int zero = 0;
unsigned char var_18 = (unsigned char)120;
int var_19 = -657833995;
unsigned char var_20 = (unsigned char)98;
unsigned long long int var_21 = 11182990201566537441ULL;
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
