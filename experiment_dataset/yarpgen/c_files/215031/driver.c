#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13050;
unsigned short var_3 = (unsigned short)4058;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)48;
unsigned int var_7 = 4256050387U;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)3918;
int zero = 0;
long long int var_17 = -4271447153476328663LL;
unsigned short var_18 = (unsigned short)57395;
long long int var_19 = 7552356690687504181LL;
unsigned long long int var_20 = 14143035883926639703ULL;
unsigned short var_21 = (unsigned short)58674;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
