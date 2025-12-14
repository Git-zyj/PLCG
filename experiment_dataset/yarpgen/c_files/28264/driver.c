#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5088155909063106771LL;
long long int var_4 = -6336075831241399005LL;
int var_5 = -478662884;
unsigned long long int var_6 = 8079314667865428943ULL;
_Bool var_7 = (_Bool)0;
long long int var_8 = -9006705597813314177LL;
int var_9 = 1637104301;
int zero = 0;
unsigned long long int var_10 = 10007297436649832ULL;
unsigned short var_11 = (unsigned short)57339;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
