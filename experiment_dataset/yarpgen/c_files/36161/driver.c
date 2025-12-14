#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)9;
long long int var_5 = 5926093098970038226LL;
long long int var_8 = 6305867733515094090LL;
int zero = 0;
signed char var_10 = (signed char)-27;
int var_11 = -772604654;
long long int var_12 = 7183422766778360163LL;
long long int var_13 = 1172411110767761811LL;
unsigned short var_14 = (unsigned short)38724;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
