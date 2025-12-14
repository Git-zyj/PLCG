#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50628;
long long int var_4 = -2483047173221567263LL;
unsigned long long int var_6 = 7907226683098373013ULL;
int var_10 = 2070413594;
long long int var_11 = -1888002698211614438LL;
short var_12 = (short)26146;
signed char var_13 = (signed char)-104;
int var_16 = -361167959;
unsigned short var_17 = (unsigned short)41508;
int zero = 0;
unsigned long long int var_20 = 11893566495052404806ULL;
unsigned int var_21 = 3831498187U;
unsigned char var_22 = (unsigned char)103;
void init() {
}

void checksum() {
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
