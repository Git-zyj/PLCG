#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1975048066386394215ULL;
long long int var_1 = 5634070302614985649LL;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)225;
unsigned char var_6 = (unsigned char)158;
unsigned long long int var_7 = 7332824496609532376ULL;
short var_8 = (short)31193;
long long int var_9 = -8167583356572459491LL;
long long int var_10 = -3034453076263976699LL;
int zero = 0;
unsigned short var_11 = (unsigned short)1850;
unsigned int var_12 = 221354298U;
unsigned long long int var_13 = 9546658876939552585ULL;
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
