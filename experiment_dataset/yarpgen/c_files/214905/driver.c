#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1817155670631347502ULL;
unsigned int var_2 = 4026520004U;
unsigned short var_5 = (unsigned short)54663;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
short var_10 = (short)-27433;
int zero = 0;
unsigned short var_11 = (unsigned short)38184;
unsigned short var_12 = (unsigned short)57695;
unsigned int var_13 = 3989943997U;
unsigned char var_14 = (unsigned char)117;
unsigned int var_15 = 4249926516U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
