#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1841175206;
unsigned int var_4 = 748220522U;
long long int var_5 = 8521505165721523953LL;
short var_8 = (short)21476;
unsigned char var_9 = (unsigned char)217;
int zero = 0;
signed char var_10 = (signed char)-54;
unsigned short var_11 = (unsigned short)8365;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
