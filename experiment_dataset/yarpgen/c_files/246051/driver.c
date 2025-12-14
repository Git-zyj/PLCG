#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27668;
unsigned char var_4 = (unsigned char)40;
signed char var_5 = (signed char)-42;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)3908;
long long int var_8 = 2130377821736790951LL;
signed char var_9 = (signed char)101;
int zero = 0;
unsigned char var_11 = (unsigned char)93;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
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
