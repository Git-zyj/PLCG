#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50213;
unsigned long long int var_4 = 5306156868086401004ULL;
unsigned char var_5 = (unsigned char)25;
int var_6 = 1811576326;
unsigned short var_9 = (unsigned short)49779;
int zero = 0;
unsigned long long int var_10 = 17997054415050907226ULL;
_Bool var_11 = (_Bool)1;
long long int var_12 = -1036600028049166463LL;
signed char var_13 = (signed char)40;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
