#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2480823672377581028LL;
_Bool var_10 = (_Bool)1;
short var_13 = (short)19195;
unsigned short var_16 = (unsigned short)8439;
unsigned char var_18 = (unsigned char)210;
int zero = 0;
unsigned int var_20 = 3783219875U;
long long int var_21 = 6548448328728370713LL;
void init() {
}

void checksum() {
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
