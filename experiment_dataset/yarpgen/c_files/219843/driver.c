#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3474386815758641781LL;
_Bool var_1 = (_Bool)1;
short var_7 = (short)27870;
unsigned char var_8 = (unsigned char)115;
unsigned char var_11 = (unsigned char)63;
unsigned char var_12 = (unsigned char)189;
unsigned long long int var_17 = 2438103496721174588ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)11;
int var_20 = -899649514;
unsigned short var_21 = (unsigned short)4507;
unsigned int var_22 = 3571681163U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
