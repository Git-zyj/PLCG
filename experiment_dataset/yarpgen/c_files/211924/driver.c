#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)202;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)92;
int var_6 = 2080687720;
unsigned char var_8 = (unsigned char)194;
unsigned char var_11 = (unsigned char)251;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)27057;
long long int var_18 = -3818861276967373676LL;
int zero = 0;
unsigned long long int var_19 = 5262808305980025801ULL;
unsigned int var_20 = 2022986094U;
unsigned int var_21 = 2147385405U;
unsigned short var_22 = (unsigned short)29550;
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
