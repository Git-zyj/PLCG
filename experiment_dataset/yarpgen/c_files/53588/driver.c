#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-76;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)58273;
unsigned char var_9 = (unsigned char)14;
unsigned char var_13 = (unsigned char)194;
unsigned short var_14 = (unsigned short)61690;
_Bool var_15 = (_Bool)1;
signed char var_18 = (signed char)-127;
int zero = 0;
unsigned short var_19 = (unsigned short)12336;
unsigned char var_20 = (unsigned char)63;
unsigned long long int var_21 = 375166949662133760ULL;
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
