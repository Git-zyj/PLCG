#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5790;
signed char var_3 = (signed char)109;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_8 = -547805433528009076LL;
unsigned short var_9 = (unsigned short)35841;
int zero = 0;
unsigned short var_11 = (unsigned short)19490;
unsigned short var_12 = (unsigned short)55175;
unsigned int var_13 = 1059538544U;
void init() {
}

void checksum() {
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
