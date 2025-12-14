#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2967932329U;
unsigned char var_3 = (unsigned char)100;
unsigned long long int var_4 = 17940380159284896977ULL;
unsigned short var_8 = (unsigned short)27693;
unsigned long long int var_9 = 14465307869197639047ULL;
long long int var_11 = -1973803698735327919LL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)39511;
unsigned char var_19 = (unsigned char)18;
int zero = 0;
unsigned char var_20 = (unsigned char)174;
unsigned long long int var_21 = 13731737233514345254ULL;
void init() {
}

void checksum() {
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
