#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38816;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)54;
unsigned int var_11 = 121512408U;
short var_14 = (short)14874;
int zero = 0;
short var_17 = (short)-30383;
unsigned char var_18 = (unsigned char)142;
unsigned long long int var_19 = 7439753361164031747ULL;
unsigned short var_20 = (unsigned short)49495;
_Bool var_21 = (_Bool)0;
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
