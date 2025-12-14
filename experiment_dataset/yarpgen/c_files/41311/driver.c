#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-70;
_Bool var_3 = (_Bool)1;
int var_4 = 1232732398;
unsigned int var_8 = 3693046526U;
unsigned short var_9 = (unsigned short)509;
unsigned long long int var_10 = 3941433993452371562ULL;
int zero = 0;
unsigned long long int var_13 = 7859268129744519807ULL;
unsigned char var_14 = (unsigned char)61;
int var_15 = -230167574;
long long int var_16 = 3517366125092141202LL;
unsigned int var_17 = 3934478840U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
