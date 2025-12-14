#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16435613628960234698ULL;
long long int var_3 = 2899616813201498840LL;
unsigned short var_4 = (unsigned short)61070;
unsigned char var_7 = (unsigned char)178;
unsigned long long int var_8 = 2983448184167223398ULL;
unsigned long long int var_10 = 4563209678931238675ULL;
unsigned char var_12 = (unsigned char)207;
int zero = 0;
unsigned long long int var_13 = 7309262162117199533ULL;
int var_14 = -2016675972;
void init() {
}

void checksum() {
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
