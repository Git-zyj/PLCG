#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-6609;
unsigned short var_8 = (unsigned short)59903;
long long int var_9 = 3708270900845590764LL;
unsigned int var_13 = 3480831773U;
unsigned short var_18 = (unsigned short)46733;
int zero = 0;
long long int var_19 = -2078795945633859924LL;
signed char var_20 = (signed char)-46;
unsigned char var_21 = (unsigned char)68;
long long int var_22 = 7895254534692555819LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
