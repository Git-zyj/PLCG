#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10223;
long long int var_2 = 7369017767618927640LL;
short var_3 = (short)5202;
signed char var_6 = (signed char)106;
unsigned int var_7 = 2363650703U;
unsigned int var_8 = 354513063U;
signed char var_9 = (signed char)14;
signed char var_10 = (signed char)5;
int zero = 0;
unsigned char var_11 = (unsigned char)33;
long long int var_12 = -2231563805757050987LL;
signed char var_13 = (signed char)-35;
short var_14 = (short)-18068;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
