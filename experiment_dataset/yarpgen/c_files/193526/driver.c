#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)102;
unsigned char var_2 = (unsigned char)109;
unsigned char var_4 = (unsigned char)248;
unsigned short var_5 = (unsigned short)42886;
unsigned int var_6 = 2490651238U;
signed char var_7 = (signed char)-59;
int zero = 0;
unsigned char var_10 = (unsigned char)103;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
