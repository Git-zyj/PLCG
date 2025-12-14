#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)195;
unsigned short var_5 = (unsigned short)52692;
unsigned char var_6 = (unsigned char)161;
unsigned char var_8 = (unsigned char)29;
short var_9 = (short)-29928;
unsigned short var_11 = (unsigned short)40154;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)49681;
unsigned short var_21 = (unsigned short)55669;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
